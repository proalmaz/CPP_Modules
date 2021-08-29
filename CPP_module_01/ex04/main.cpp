#include <iostream>
#include <fstream>
#include <string>

using std::cin;
using std::string;
using std::cout;
using std::endl;

int main(int argc, char *argv[])
{
	if (!argv[1] || !argv[2] || !argv[3])
		return 0;
	string filenameStr = argv[1];
	string strForReplace = argv[2];
	string replacedStr = argv[3];
	std::ifstream inf(filenameStr);
	if (!inf)
	{
		std::cerr << "Uh oh, filename could not be opened for reading!"
				  << endl;
		return 1;
	}
	std::ofstream outf(filenameStr + ".replace");
	if (!outf)
	{
		std::cerr << "Uh oh, filename.replace could not be opened for writing!"
				  << endl;
		return 1;
	}
	string strInput;
	while (getline(inf, strInput))
	{
		size_t pos = 0;
		while ((pos = strInput.find(strForReplace, pos)) != std::string::npos)
		{
			strInput.erase(pos, strForReplace.length());
			strInput.insert(pos, replacedStr);
			pos += replacedStr.length();
		}
		outf << strInput << endl;
		cout << strInput << endl;
	}
	return 0;
}