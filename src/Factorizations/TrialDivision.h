#ifndef FACTORIZATIONS_TRIALDIVISTION_H
#define FACTORIZATIONS_TRIALDIVISTION_H

#include "../Abstracts/IFactorization.h"

class TrialDivision: public IFactorization {
public:
	TrialDivision();
	virtual ~TrialDivision();
	void Factor();
};

#endif
