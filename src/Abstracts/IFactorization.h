#ifndef ABSTRACTS_IFACTORIZATION_H_
#define ABSTRACTS_IFACTORIZATION_H_

#include <gmpxx.h>
using namespace std;

class IFactorization {
public:
	mpz_t m0, m1, m2;
	IFactorization();
	virtual ~IFactorization();
	void SetInput(mpz_t input);
	void CheckResult(bool printResult = false);
	virtual void Factor() = 0;
};

#endif
