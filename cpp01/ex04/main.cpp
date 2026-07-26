#include <string>
#include <iostream>
#include <fstream>

int main(int argc, char **argv) {
	std::string s1;
	std::string s2;
	std::string line;
	std::size_t found;
	std::string outFile;
	std::size_t pos;

	if (argc != 4) {
		std::cerr << "Expected 3 arguments but got " << argc - 1 << std::endl;
		return (1);
	}

	s1 = argv[2];
	s2 = argv[3];
	if (s1.empty()) {
		std::cerr << "s1 can't be empty" << std::endl;
		return (1);
	}

	std::ifstream inputFile(argv[1]);
	if (!inputFile.is_open()) {
		std::cerr << argv[1] << " file not found or permission denied" << std::endl;
		return (1);
	}

	outFile = argv[1];
	outFile.append(".replace");

	std::ofstream outputFile(outFile.c_str());
	if(!outputFile.is_open()) {
		std::cerr << "Failed to create file" << outFile << std::endl;
		return (1);
	}
	
	while (std::getline(inputFile, line)) {
		pos = 0;
		while ((found = line.find(s1, pos)) != std::string::npos) {
			line.erase(found, s1.length());
			line.insert(found, s2);
			pos = found + s2.length();
		}
		outputFile << line;
		if (!inputFile.eof()) {
			outputFile << '\n';
		}
	}
	return (0);
}
