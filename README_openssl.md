https://openssl-library.org/source/

- INSTALACJA (openssl-3.6 z commita 24.03.2026)
; zmień RSA_MIN_MODULUS_BITS w include\crypto\rsa.h
; skorzytaj z INSTALL.md
; skorzystaj z NOTES-WINDOWS.md
; uruchom terminal MSYS2 MINGW64
; pacman -S make
; ./Configure mingw64 
; make -j$(nproc)
; make install
; /usr/local/bin/openssl version
; /usr/local/bin/openssl genrsa -out id_rsa 10
; /usr/local/bin/openssl rsa -in id_rsa -text -noout
Private-Key: (10 bit, 2 primes)
modulus: 899 (0x383)
publicExponent: 65537 (0x10001)
privateExponent: 593 (0x251)
prime1: 31 (0x1f)
prime2: 29 (0x1d)
exponent1: 23 (0x17)
exponent2: 5 (0x5)
coefficient: 15 (0xf)
-----BEGIN PRIVATE KEY-----
MDUCAQAwDQYJKoZIhvcNAQEBBQAEITAfAgEAAgIDgwIDAQABAgICUQIBHwIBHQIB
FwIBBQIBDw==
-----END PRIVATE KEY-----
; openssl rsa -pubin -in id_rsa.pub -text -noout
Public-Key: (10 bit)
Modulus: 899 (0x383)
Exponent: 65537 (0x10001)
-----BEGIN PUBLIC KEY-----
MB0wDQYJKoZIhvcNAQEBBQADDAAwCQICA4MCAwEAAQ==
-----END PUBLIC KEY-----