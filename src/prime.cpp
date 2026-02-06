#include "Factorizations/TrialDivision.h"
#include "Resources/DataForTests.h"

int main() {
	IFactorization *factorization = new TrialDivision();
	factorization->Factor(DataForTests::GetRSASemiPrime(64));
	factorization->CheckResult(true);
	delete factorization;
	return 0;
}
