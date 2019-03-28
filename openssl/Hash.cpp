#include "Hash.h"


	Hash::Hash(std::string message):message_{message}{
		EVP_MD_CTX_init(&ctx_);
	}

	Hash::~Hash(){
		EVP_MD_CTX_cleanup(&ctx_);
	}

	std::string Hash::toSHA256(){
		unsigned char md[EVP_MAX_MD_SIZE];
		unsigned md_len;
		std::string result;

		if (!EVP_DigestInit_ex(&ctx_, EVP_sha256(), NULL) ||
      !EVP_DigestUpdate(&ctx_, message_.c_str(), message_.length()) ||
      !EVP_DigestFinal_ex(&ctx_, md, &md_len)) {
    throw std::exception();
  	}

  	result = reinterpret_cast<char*>(md);
  	return result;
	}
