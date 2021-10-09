#pragma once

#include <iostream>
#include <string>
#include <exception>

using std::cin;
using std::string;
using std::cout;
using std::endl;

#ifndef NO_TYPE
# define NO_TYPE 0
#endif

#ifndef INT_TYPE
# define INT_TYPE 1
#endif

#ifndef CHAR_TYPE
# define CHAR_TYPE 2
#endif

#ifndef FLOAT_TYPE
# define FLOAT_TYPE 3
#endif

#ifndef DOUBLE_TYPE
# define DOUBLE_TYPE 4
#endif

#ifndef ZERO_TYPE
# define ZERO_TYPE 5
#endif

#ifndef NAN_TYPE
# define NAN_TYPE 6
#endif

#ifndef INF_TYPE
# define INF_TYPE 7
#endif

#ifndef MINUS_INF_TYPE
# define MINUS_INF_TYPE 8
#endif

class Convert
{
private:
	string	m_input;
	int 	m_int;
	float 	m_float;
	double 	m_double;
	char 	m_char;
	int 	m_type;
	int		flag_dot;

public:
	Convert();
	Convert(string const &input);
	Convert(Convert const &copy);
	~Convert();

	Convert	&operator=(Convert const &copy);

	void 	convertFromChar();
	void 	convertFromInt();
	void 	convertFromFloat();
	void 	convertFromDouble();
	int 	searchType();
	void 	printError();
	void 	printNanOrInf();
	void 	printValue();
	void 	printZero();
};
