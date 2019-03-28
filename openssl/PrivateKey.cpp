#include "PrivateKey.h"

#include <openssl/pem.h>

PrivateKey::PrivateKey(File f):file{f} {}