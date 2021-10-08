#pragma once

#include <iostream>
#include <string>
#include <exception>

using std::cin;
using std::string;
using std::cout;
using std::endl;

class Convert
{
private:
	string	m_input;
	int 	m_int;
	float 	m_float;
	double 	m_double;
	char 	m_char;
	char 	m_type;

public:
	Convert();
	Convert(string const &input);
	Convert(Convert const &copy);
	~Convert();

	Convert	&operator=(Convert const &copy);

	void	searchType();
	void 	toInt();
	void 	toFloat();
	void 	toDouble();
	void 	toChar();
};
