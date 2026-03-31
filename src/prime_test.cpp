#include "prime.h"

/* define benchmark */
static void BM_TrialDivision(benchmark::State &state) {
	for (auto _ : state) {
		IFactorization *factorization = new TrialDivision();
		RSAKey *rsaKey = DataForTests::GetRSASemiPrime(state.range(0));
		factorization->SetInput(rsaKey->modulus);
		factorization->Factor();
		factorization->CheckResult();
		delete rsaKey;
		delete factorization;
	}
}
static void BM_Fermat(benchmark::State &state) {
	for (auto _ : state) {
		IFactorization *factorization = new Fermat();
		RSAKey *rsaKey = DataForTests::GetRSASemiPrime(state.range(0));
		factorization->SetInput(rsaKey->modulus);
		factorization->Factor();
		factorization->CheckResult();
		delete rsaKey;
		delete factorization;
	}
}
/* register the functions as benchmark with arguments */
BENCHMARK (BM_TrialDivision)->Arg(10);
BENCHMARK (BM_Fermat)->Arg(10);
