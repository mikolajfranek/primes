
#### install library mpfr
1. "./configure --prefix= --build= --with-gnu-ld"
2. "make" 
3. "make check"
4. "sudo make install"


#### configure gmp/mpfr/benchmark in eclipse
1. Project => Properties => C/C++ Build => Environment => Add value "/include;/lib" to the PATH 
2. Project => Properties => C/C++ Build => Settings => Tool Settings => GCC Assembler => General => Include paths => Add "/include"
5. Project => Properties => C/C++ Build => Settings => Tool Settings => GCC C++ Compiler => Miscellaneous => Support for pthread

6. Project => Properties => C/C++ Build => Settings => Tool Settings => GCC C Compiler => Includes => Include paths => Add "/include" 
7. Project => Properties => C/C++ Build => Settings => Tool Settings => GCC C Compiler => Miscellaneous => Other flags => Add "-lmpfr -lgmp -lbenchmark" (to the end of value)
8. Project => Properties => C/C++ Build => Settings => Tool Settings => GCC C Compiler => Miscellaneous => Support for pthread

9. Project => Properties => C/C++ Build => Settings => Tool Settings => GCC C++ Linker => Libraries => Libraries => Add "gmp", "mpfr", "benchmark"
10. Project => Properties => C/C++ Build => Settings => Tool Settings => GCC C++ Linker => Libraries => Libraries search path => Add "/lib"
11. Project => Properties => C/C++ Build => Settings => Tool Settings => GCC C++ Linker => General => Select Support for pthread

