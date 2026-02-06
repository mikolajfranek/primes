#ifndef ABSTRACTS_IFACTORIZATION_H_
#define ABSTRACTS_IFACTORIZATION_H_

#include <gmpxx.h>
using namespace std;

class IFactorization {
public:
	IFactorization();
	virtual ~IFactorization();
	virtual void Factor(string input) = 0;
	void SetInput(string input);
	void CheckResult(bool printResult);
	bool AreFactorsSet();
	bool AreFactorsTrivial();
	mpz_t m0, m1, m2;
};

#endif
