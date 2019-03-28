#ifndef PKEY_H
#define PKEY_H

#include <string>
#include <openssl/evp.h>
#include "File.h"

class Hash {
public:

	Hash(std::string message);
	~Hash();

	std::string toSHA256();

private:
	std::string message_;
	EVP_MD_CTX ctx_;

};

#endif