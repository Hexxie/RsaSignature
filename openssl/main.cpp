#include "Runner.h"
#include "File.h"
#include "Hash.h"

#include <iostream>
#include <string>

int main(int argc, char *argv[]) {

	std::cout<<"Start..."<<std::endl;
	Runner r{argc, argv};
	File f{r.getFilePath()};

	std::string s = "Hello world test";

	if(r.isVerifyNeed()) {

		//Return verification 
		std::cout<<"Verify will be here"<<std::endl;

	} else {
		if(r.isHashNeed()) {
			std::cout<<"Hash: ";
			Hash h{s};
			 h.toSHA256();
		}

		if(r.isSignNeed()) {
			//write has to file here and send a link to user
			std::cout<<"Sign will be here"<<std::endl;
		}
	}

	return 0;
}