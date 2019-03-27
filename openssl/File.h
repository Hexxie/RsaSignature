#ifndef FILE_H
#define FILE_H

#include <string>

class File {
public:

	File(std::string filepath);

	bool createNewFile();
	bool exists();

	std::string read();
	bool write(std::string filepath);

	void printFile();

private:
	std::string _filepath;

};

#endif