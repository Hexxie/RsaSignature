#ifndef PKEY_H
#define PKEY_H

#include <string>
#include <openssl/evp.h>
#include <vector>
#include "File.h"

class Hash {
public:

	Hash(std::string message);
	~Hash();

	std::vector<unsigned char> toSHA256();

private:
	std::string message_;
	EVP_MD_CTX ctx_;

};

#endif