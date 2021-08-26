#include <iostream>

using std::string;
using std::cout;
using std::endl;

int main()
{
	string	str = "HI THIS IS BRAIN";
	string	*stringPTR = &str;
	string	&stringREF = str;

	cout << &str << endl;
	cout << &stringREF << endl;
	cout << stringPTR << endl;
	cout << str << endl;
	cout << stringREF << endl;
	cout << *stringPTR << endl;
}