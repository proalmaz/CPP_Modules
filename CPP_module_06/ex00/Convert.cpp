#include "Convert.hpp"

Convert::Convert() {}

Convert::Convert(const std::string &input) : m_input(input)
{
	m_type = searchType();
	switch (m_type)
	{
		case 0:	printError(); break;
		case 1: convertFromInt(); break;
		case 2: convertFromChar(); break;
		case 3:	convertFromFloat(); break;
		case 4: convertFromDouble(); break;
		case 5: printZero(); break;
		default: printNanOrInf(); break;
	}
	printValue();
}

Convert::Convert(const Convert &copy)
{
	*this = copy;
}

Convert::~Convert() {}

Convert	&Convert::operator=(const Convert &copy)
{
	if (this == &copy)
		return *this;
	m_int = copy.m_int;
	m_input = copy.m_input;
	m_double = copy.m_double;
	m_float = copy.m_float;
	m_char = copy.m_char;
	return *this;
}

int 	Convert::searchType()
{
	if (m_input == "nan" || m_input == "nanf")
		return NAN_TYPE;
	else if (m_input == "inf" || m_input == "inff"
			|| m_input == "+inf" || m_input == "+inff")
		return INF_TYPE;
	else if (m_input == "-inf" || m_input == "-inff")
		return MINUS_INF_TYPE;
	else if (m_input.length() == 1 && !std::isdigit(m_input.at(0)) )
		return CHAR_TYPE;
	else if (m_input.length() == 1 && m_input.at(0) == '0')
		return ZERO_TYPE;
	for (int i = 0; i < m_input.length(); ++i)
	{
		if (m_input.at(0) == '+' || m_input.at(0) == '-')
			continue;

		if (i == m_input.length() - 1)
		{
			if ((flag_dot == 1 && m_input.at(i) == 'f')
			|| m_input.at(i) == 'f')
				return FLOAT_TYPE;
			else if (flag_dot == 1)
				return DOUBLE_TYPE;
			else
				return INT_TYPE;
		}
		if(m_input.at(i) == '.')
		{
			flag_dot = 1;
		}
		else if (!std::isdigit(m_input.at(i)))
			return NO_TYPE;
	}
	return NO_TYPE;
}

void 	Convert::printZero()
{
	cout << "char: Non displayable\n"
			"int: 0\n"
			"float: 0.0f\n"
			"double: 0.0" << endl;
	exit(0);
}

void 	Convert::printNanOrInf()
{
	if (m_type == 5)
	{
		cout << "char: impossible\n"
				"int: impossible\n"
				"float: nanf\n"
				"double: nan" << endl;
		exit(0);
	}
	else if (m_type == 6)
	{
		cout << "char: impossible\n"
				"int: impossible\n"
				"float: inff\n"
				"double: inf" << endl;
		exit(0);
	}
	else if (m_type == 7)
	{
		cout << "char: impossible\n"
				"int: impossible\n"
				"float: -inff\n"
				"double: -inf" << endl;
		exit(0);
	}
}

void 	Convert::printError()
{
	cout << "Error catched: Argument doesn't match any needed type: "
			"<char> <int> <double> <float>" << endl;
	exit(0);
}

void 	Convert::convertFromChar()
{
	m_char = m_input.at(0);
	m_int = static_cast<int>(m_char);
	m_float = static_cast<float>(m_char);
	m_double = static_cast<double>(m_char);
}

void 	Convert::convertFromInt()
{
	try
	{
		m_int = std::stoi(m_input);
	}
	catch (std::exception &e)
	{
		cout << "Error: integer overload" << endl;
		exit(0);
	}
	m_char = static_cast<char>(m_int);
	m_float = static_cast<float>(m_int);
	m_double = static_cast<double>(m_int);
}

void 	Convert::convertFromFloat()
{
	try
	{
		m_float = std::stof(m_input);
	}
	catch (std::exception &e)
	{
		cout << "Error: float overload" << endl;
		exit(0);
	}
	m_char = static_cast<char>(m_float);
	m_int = static_cast<int>(m_float);
	m_double = static_cast<double>(m_float);
}

void 	Convert::convertFromDouble()
{
	m_double = std::stod(m_input);
	m_char = static_cast<char>(m_double);
	m_int = static_cast<int>(m_double);
	m_float = static_cast<float>(m_double);
}

void 	Convert::printValue()
{
	if (m_char && (m_char >= 32 && m_char < 127) && (m_float >= -128 &&
	m_float <= 127))
		cout << "char: '" << m_char << "'" << endl;
	else if ((m_char > 0 && m_char < 32) || m_char == 127)
		cout << "char: Non displayable" << endl;
	else
		cout << "char: impossible" << endl;
	if (m_int && (m_float >= -2147483648.0 && m_float <= 2147483647.0))
		cout << "int: " << m_int << endl;
	else
		cout << "int: impossible\n";
	if (m_float && flag_dot)
		cout << "float: " << m_float << "f" << endl;
	else if (m_float)
		cout << "float: " << m_float << ".0f" << endl;
	else
		cout << "float: impossible\n";
	if (m_double && flag_dot)
		cout << "double: " << m_double << endl;
	else if (m_double)
		cout << "double: " << m_double << ".0" << endl;
	else
		cout << "double: impossible\n";
}