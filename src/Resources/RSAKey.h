#ifndef RESOURCES_RSAKEY_H_
#define RESOURCES_RSAKEY_H_

#include <gmpxx.h>
using namespace std;

class RSAKey {
public:
	mpz_t modulus, publicExponent, privateExponent, prime1, prime2, exponent1,
			exponent2, coefficient;
	RSAKey();
	virtual ~RSAKey();
};

#endif
