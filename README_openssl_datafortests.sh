#!/bin/bash

emit_mpz() {
        local name="$1" val="$2"
        if [[ "$val" =~ ^[0-9]+$ ]]; then
                echo "mpz_set_str(rsaKey->${name}, \"${val}\", 10);" >> output.txt
        else
                local h="${val//:/}"
                echo "mpz_set_str(rsaKey->${name}, \"${h}\", 16);" >> output.txt
        fi
}

: > output.txt
for ((i = 10 ; i < 4097 ; i+=1 ));
do
        /usr/local/bin/openssl genrsa -out id_rsa "$i" >/dev/null 2>&1

        lineNum=0
        out=""
        while read -r line; do
                ((lineNum++))
                (( lineNum == 1 )) && continue
                tmp="${line/\(*/}"
                tmp="${tmp//$'\n'/}"
                tmp="${tmp//[[:space:]]/}"
                out=$out$tmp
        done < <(/usr/local/bin/openssl rsa -in id_rsa -text -noout 2>/dev/null 2>&1)

        modulus=$(printf '%s' "$out" | grep -oP 'modulus:\K.+?(?=publicExponent:)')
        publicExponent=$(printf '%s' "$out" | grep -oP 'publicExponent:\K\d+(?=privateExponent:)')
        privateExponent=$(printf '%s' "$out" | grep -oP 'privateExponent:\K.+?(?=prime1:)')
        prime1=$(printf '%s' "$out" | grep -oP 'prime1:\K.+?(?=prime2:)')
        prime2=$(printf '%s' "$out" | grep -oP 'prime2:\K.+?(?=exponent1:)')
        exponent1=$(printf '%s' "$out" | grep -oP 'exponent1:\K.+?(?=exponent2:)')
        exponent2=$(printf '%s' "$out" | grep -oP 'exponent2:\K.+?(?=coefficient:)')
        coefficient=$(printf '%s' "$out" | grep -oP 'coefficient:\K.+$')

        echo "case ${i}:" >> output.txt
        emit_mpz modulus           "$modulus"
        emit_mpz publicExponent    "$publicExponent"
        emit_mpz privateExponent   "$privateExponent"
        emit_mpz prime1            "$prime1"
        emit_mpz prime2            "$prime2"
        emit_mpz exponent1         "$exponent1"
        emit_mpz exponent2         "$exponent2"
        emit_mpz coefficient       "$coefficient"
        echo "break;" >> output.txt
done