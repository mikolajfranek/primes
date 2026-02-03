- DOKUMENTACJA
; https://gmplib.org/manual
;;; https://gmplib.org/manual/GMP-Basics
;;;;;; TODO
;;;;;; https://gmplib.org/manual/Headers-and-Libraries

- INSTALACJA
; uruchom terminal MSYS2 MINGW64
; pacman -S mingw-w64-x86_64-gmp

- KONFIGURACJA ECLIPSE
; Project => Properties => C/C++ Build => Settings => Tool Settings => GCC C++ Compiler => Includes => Include paths => Add "C:\msys64\mingw64\include" 
; Project => Properties => C/C++ Build => Settings => Tool Settings => GCC C++ Compiler => Miscellaneous => Other flags => Add "-lgmpxx -lgmp"