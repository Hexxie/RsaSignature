#include "File.h"

#include <iostream>
#include <fstream>

	File::File(std::string filepath):_filepath{filepath} {}

	bool File::createNewFile() {}

	bool File::exists() {
		bool result = false;
		std::ifstream file (_filepath, std::ios::in|std::ios::binary|std::ios::ate);
		if(file.is_open()) result = true;
		file.close();
		return result;
	}

	std::string File::read() {
		std::string memblk;


		std::ifstream file (_filepath, std::ios::in|std::ios::binary|std::ios::ate);
		if (file.is_open()) {
		std::streampos size = file.tellg();
		char* tmp = new char[size];
		file.seekg (0, std::ios::beg);
		file.read (tmp, size);

    file.close();

    memblk = tmp;

    delete[] tmp;
		}		

		return memblk;
	}

	bool File::write(std::string filepath) {

	}

	void File::printFile() {
		std::string line;
		std::ifstream myfile (_filepath);
		if (myfile.is_open()) {
    while (getline (myfile,line)){
      std::cout << line << '\n';
    }
    myfile.close();
  	}
  }
