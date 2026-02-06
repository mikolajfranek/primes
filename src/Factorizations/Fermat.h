#ifndef FACTORIZATIONS_FERMAT_H_
#define FACTORIZATIONS_FERMAT_H_

#include "../Abstracts/IFactorization.h"

class Fermat: public IFactorization {
public:
	Fermat();
	virtual ~Fermat();
	void Factor(string input);
};

#endif
