#ifndef PKEY_H
#define PKEY_H

#include <string>
#include "File.h"

class PrivateKey {
public:

	PrivateKey(File f);

private:
	File file;

};

#endif