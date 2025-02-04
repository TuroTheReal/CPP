#include <iostream>
#include <fstream>

int replaceInsideFile(std::string const& filename, std::string const& s1, std::string const& s2){

	// check if input s1 / filename is empty
	if (s1.empty()|| filename.empty()){
		if (s1.empty())
			std::cerr << "Error: s1 cannot be empty." << std::endl;
		else
			std::cerr << "Error: filename cannot be empty." << std::endl;
		return 1;
	}

	// create ifstream and check if filename is openable
	std::ifstream inFile;
	inFile.open(filename.c_str());
	if (!inFile.is_open()){
		std::cerr << "Error: cannot open file." << std::endl;
		return 1;
	}

	// check if the file is not empty
	std::string str;
	std::getline(inFile, str);
	if (str.empty()){
		std::cerr << "Error: file cannot be empty." << std::endl;
		return 1;
	}

	// close it before re-open it bc we need it at beggining, not second line
	inFile.close();

	// create outfile and check if it can be open
	std::ofstream outFile;
	outFile.open((filename + ".replace").c_str());
	if (!outFile.is_open()){
		std::cerr << "Error: cannot create output file." << std::endl;
		return 1;
	}

	// loop to check if s1 and replace it by s2
	inFile.open(filename.c_str());
	while (std::getline(inFile, str))
	{
		std::string newLine;
		size_t pos = 0, lastPos = 0;
		while ((pos = str.find(s1, lastPos)) != std::string::npos)
		{
			newLine += str.substr(lastPos, pos - lastPos);
			newLine += s2;
			lastPos = pos + s1.length();
		}
	newLine += str.substr(lastPos);
	outFile << newLine << std::endl;
	}

	// finally close fd's
	inFile.close();
	outFile.close();
	
	return 0;
}

int main(int ac, char **av){
	if (ac == 4)
	{
		if (replaceInsideFile(av[1], av[2], av[3]))
			return 1;
		return 0;
	}
	std::cerr << "Usage: " << av[0] \
	<< " <filename> <s1> <s2>" << std::endl;
	return 1;
}