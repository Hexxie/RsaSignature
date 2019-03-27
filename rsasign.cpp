#include <iostream>
#include <unistd.h>

/*
	1. Get message from file
  2. Get pkey from file
  3. Hash it
  4. Sign it
  5. Verify it
*/
int main(int argc, char *argv[]) {
	int result;

	std::cout<<"Start..."<<std::endl;

		while((result = getopt(argc, argv, "vshf:k:")) != -1) {
			switch (result) {
				case 'v': 
				{
					std::cout<<"Stub for verify"<<std::endl;
					break;
				}
				case 's': 
				{
					std::cout<<"Stub for verify"<<std::endl;
					break;
				}
				case 'h':
				{
					std::cout<<"Stub for hash"<<std::endl;
					break;
				}
				case 'f':
				{
					std::cout<<"Parse this file "<<optarg<<std::endl;
					break;
				}
				case 'k':
				{
					std::cout<<"Parse this key "<<optarg<<std::endl;
					break;
				}
				case '?':
				{
					std::cout<<"Invalid argument"<<optarg<<std::endl;
					break;
				}
			}
		}
	
	return 0;
}