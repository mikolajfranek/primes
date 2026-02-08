#include "prime.h"

/* define benchmark */
static void BM_TrialDivision(benchmark::State &state) {
	for (auto _ : state) {
		IFactorization *factorization = new TrialDivision();
		factorization->Factor(DataForTests::GetRSASemiPrime(state.range(0)));
		factorization->CheckResult(false);
		delete factorization;
	}
}
static void BM_Fermat(benchmark::State &state) {
	for (auto _ : state) {
		IFactorization *factorization = new Fermat();
		factorization->Factor(DataForTests::GetRSASemiPrime(state.range(0)));
		factorization->CheckResult(false);
		delete factorization;
	}
}
/* register the functions as benchmark with arguments */
BENCHMARK (BM_TrialDivision)->Arg(64);
BENCHMARK (BM_Fermat)->Arg(64);
