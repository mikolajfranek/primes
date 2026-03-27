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