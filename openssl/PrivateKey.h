#ifndef PKEY_H
#define PKEY_H

#include <string>
#include "File.h"

class PrivateKey {
public:

	PrivateKey(File f);
	~PrivateKey();

	EVP_PKEY* getKey();

private:
	File file;
	EVP_PKEY* evpkey;

};
//https://stackoverflow.com/questions/11886262/reading-public-private-key-from-memory-with-openssl
#endif