#include "IFactorization.h"

IFactorization::IFactorization() {
	mpz_inits(this->m0, this->m1, this->m2, NULL);
}

IFactorization::~IFactorization() {
	mpz_clears(this->m0, this->m1, this->m2, NULL);
}

void IFactorization::SetInput(mpz_t input) {
	mpz_set(this->m0, input);
}

void IFactorization::CheckResult(bool printResult) {
	mpz_t guess;
	mpz_inits(guess, NULL);
	mpz_mul(guess, this->m1, this->m2);
	if (printResult == true) {
		gmp_printf("%Zd = %Zd * %Zd\n", this->m0, this->m1, this->m2);
	}
	if (mpz_cmp(guess, this->m0) != 0) {
		gmp_printf("%Zd = %Zd * %Zd\n", this->m0, this->m1, this->m2);
		printf("Error: IFactorization::CheckResult\n");
		throw;
	}
	mpz_clears(guess, NULL);
}
