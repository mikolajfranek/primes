#include "prime.h"

/* define benchmark */
static void BM_FactorizationTrialDivision(benchmark::State &state) {
	for (auto _ : state) {
		IFactorization *factorization = new TrialDivision();
		factorization->Factor(DataForTests::GetRSASemiPrime(state.range(0)));
		factorization->CheckResult(false);
		delete factorization;
	}
}
static void BM_FactorizationFermat(benchmark::State &state) {
	for (auto _ : state) {
		IFactorization *factorization = new Fermat();
		factorization->Factor(DataForTests::GetRSASemiPrime(state.range(0)));
		factorization->CheckResult(false);
		delete factorization;
	}
}
/* register the functions as benchmark with arguments */
BENCHMARK (BM_FactorizationTrialDivision) ->Arg(64);
BENCHMARK (BM_FactorizationFermat) ->Arg(64);
