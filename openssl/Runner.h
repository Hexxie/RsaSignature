#ifndef RUNNER_H
#define RUNNER_H

#include <string>

class Runner {

	public:
	 Runner(int argc, char *argv[]);

	 bool isSignNeed() const;
	 bool isVerifyNeed() const;
	 bool isHashNeed() const;

	 std::string getFilePath() const;
	 std::string getKeyPath() const;

	private:
		bool isSign {false};
		bool isVerify {false};
		bool isHash {false};

		std::string filepath{};
		std::string keypath{};
};

#endif