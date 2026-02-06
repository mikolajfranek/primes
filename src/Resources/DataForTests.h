#ifndef RESOURCES_DATAFORTESTS_H_
#define RESOURCES_DATAFORTESTS_H_

#include <string>
using namespace std;

class DataForTests {
public:
	static string GetRSASemiPrime(unsigned short numberOfBits);
	static string GetSafePrime(unsigned short numberOfBits);
};

#endif
