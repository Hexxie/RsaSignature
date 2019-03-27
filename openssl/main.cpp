#include "Runner.h"
#include "File.h"

#include <iostream>

class Signature {

};


int main(int argc, char *argv[]) {

	std::cout<<"Start..."<<std::endl;
	Runner r{argc, argv};

	File f{r.getFilePath()};

	if(r.isHashNeed()) {
		std::cout<<"Hash will be here"<<std::endl;
	}

	if(r.isSignNeed()) {
		std::cout<<"Sign will be here"<<std::endl;
	}

	if(r.isVerifyNeed()) {
		std::cout<<"Verify will be here"<<std::endl;
	}

	
	return 0;
}