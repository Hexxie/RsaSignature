#include "Runner.h"

#include <iostream>
#include <fstream>
#include <string>
#include <unistd.h>


	 Runner::Runner(int argc, char *argv[]) {
		int result;
			while((result = getopt(argc, argv, "vshf:k:")) != -1) {
			switch (result) {
				case 'v': 
				{
					std::cout<<"Stub for verify"<<std::endl;
					isVerify = true;
					break;
				}
				case 's': 
				{
					//Sign file and write in to the output file
					std::cout<<"Stub for signature"<<std::endl;
					isSign = true;
					break;
				}
				case 'h':
				{
					//Hash file and write it to the file
					std::cout<<"Stub for hash"<<std::endl;
					isHash = true;
					break;
				}
				case 'f':
				{
					filepath = optarg;
					break;
				}
				case 'k':
				{
					std::cout<<"Parse this key "<<optarg<<std::endl;
					keypath = optarg;
					break;
				}
				case '?':
				{
					std::cout<<"Invalid argument"<<optarg<<std::endl;
					break;
				}
			}
		}
	}

	bool Runner::isSignNeed() const {
		return isSign;
	}

	bool Runner::isVerifyNeed() const {
		return isVerify;
	}

	bool Runner::isHashNeed() const {
		return isHash;
	}

	std::string Runner::getFilePath() const {
		return filepath;
	}
	std::string Runner::getKeyPath() const {
		return keypath;
	}