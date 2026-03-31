#include "prime.h"

int main() {
	IFactorization *factorization = new TrialDivision();
	RSAKey *rsaKey = DataForTests::GetRSASemiPrime(10);
	factorization->SetInput(rsaKey->modulus);
	factorization->Factor();
	factorization->CheckResult();
	delete rsaKey;
	delete factorization;
	return 0;
}
// OR run benchmark macro
//BENCHMARK_MAIN();
