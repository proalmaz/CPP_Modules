#pragma once

#include <iostream>
#include <string>

using std::cin;
using std::string;
using std::cout;
using std::endl;

class Karen
{
private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
public:
	void complain(string level);
};