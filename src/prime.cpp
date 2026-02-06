#include "Factorizations/TrialDivision.h"
#include "Resources/DataForTests.h"
#include "Factorizations/Fermat.h"

int main() {
	IFactorization *factorization = new Fermat();
	factorization->Factor(DataForTests::GetRSASemiPrime(64));
	factorization->CheckResult(true);
	delete factorization;
	return 0;
}
