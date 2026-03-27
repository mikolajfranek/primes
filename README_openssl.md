https://openssl-library.org/source/

- INSTALACJA (openssl-3.6 z commita 24.03.2026)
; skorzytaj z INSTALL.md
; skorzystaj z NOTES-WINDOWS.md
; uruchom terminal MSYS2 MINGW64
; pacman -S make
; ./Configure mingw64 
; make -j$(nproc)
; make install
; /usr/local/bin/openssl version

;  /usr/local/bin/openssl genrsa -out id_rsa 1024
; $ /usr/local/bin/openssl genrsa -out id_rsa 102
Error setting RSA length
E0340000:error:1C8000AB:Provider routines:rsa_gen_set_params:key size too small:providers/implementations/keymgmt/rsa_kmgmt.c:513:
