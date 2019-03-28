#include "PrivateKey.h"

#include <openssl/pem.h>

PrivateKey::PrivateKey(File f):file{f} {
	evpkey = EVP_PKEY_new();
}

PrivateKey::~PrivateKey() {
	EVP_PKEY_free(evpkey);
}

EVP_PKEY* PrivateKey::getKey() {

}