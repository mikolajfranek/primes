#include "prime.h"

int main() {
	IFactorization *factorization = new Fermat();
	factorization->Factor(DataForTests::GetRSASemiPrime(64));
	factorization->CheckResult(true);
	delete factorization;
	return 0;
}
// OR run benchmark macro
// BENCHMARK_MAIN();
