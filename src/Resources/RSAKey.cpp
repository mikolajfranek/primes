#include "RSAKey.h"

RSAKey::RSAKey() {
	mpz_inits(this->modulus, this->publicExponent, this->privateExponent,
			this->prime1, this->prime2, this->exponent1, this->exponent2,
			this->coefficient, NULL);
}

RSAKey::~RSAKey() {
	mpz_clears(this->modulus, this->publicExponent, this->privateExponent,
			this->prime1, this->prime2, this->exponent1, this->exponent2,
			this->coefficient, NULL);
}
