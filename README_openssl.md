https://openssl-library.org/source/

- INSTALACJA
; skorzytaj z INSTALL.md
; skorzystaj z NOTES-WINDOWS.md
; uruchom terminal MSYS2 MINGW64
; pacman -S make
; ./Configure mingw64 no-quic --prefix=/c/openssl-mingw64
;;; no-quic dodany ze względu na error: 'SIO_UDP_NETRESET' undeclared (wersja 3.5.6)
; make -j$(nproc)
; make test
; make install

LUB sprawdz openssl wersje 3.6.0 