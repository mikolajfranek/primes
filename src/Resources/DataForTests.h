#ifndef RESOURCES_DATAFORTESTS_H_
#define RESOURCES_DATAFORTESTS_H_

#include "RSAKey.h"
#include <string>
using namespace std;

class DataForTests {
public:
	static RSAKey* GetRSASemiPrime(unsigned short numberOfBits);
};

#endif
