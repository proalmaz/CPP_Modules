#include "main.hpp"

int main(int argc, char *argv[])
{
	string filenameStr = argv[1];
	string strForReplace = argv[2];
	string replacedStr = argv[3];

	if (!argv[1] || !argv[2] || !argv[3])
		return 0;
	std::ofstream outf(filenameStr.substr(0, filenameStr.length()) + ""
																	 ".replace");
	if (!outf)
	{
		std::cerr << "Uh oh, filename.replace could not be opened for writing!"
		<< endl;
		return 1;
	}
	std::ifstream inf(filenameStr);
	if (!inf)
	{
		std::cerr << "Uh oh, filename could not be opened for reading!"
		<< endl;
		return 1;
	}
	while (inf)
	{
		string strInput;
		inf >> strInput;
		if (strInput == strForReplace)
		{
			strInput.substr(0, 0 + replacedStr);

		}
	}
	return 0;
}