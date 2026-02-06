- DOKUMENTACJA
; https://github.com/google/benchmark

- INSTALACJA
; uruchom terminal MSYS2 MINGW64
; pacman -S mingw-w64-x86_64-benchmark
; pacman -Q --info mingw-w64-x86_64-benchmark

- KONFIGURACJA ECLIPSE
; Project => Properties => C/C++ Build => Settings => Tool Settings => MinGW C++ Linker => Libraries 
=> Add "benchmark" 

- KONFIGURACJA ECLIPSE
1. Run => Run Configurations... => Arguments => Program arguments => Add "--benchmark_format=json"