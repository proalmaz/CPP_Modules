#include "Convert.hpp"

Convert::Convert() {}

Convert::Convert(const std::string &input) : m_input(input)
{
	searchType();
	toChar();
	toInt();
	toFloat();
	toDouble();
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
	m_type = copy.m_type;
	m_int = copy.m_int;
	m_input = copy.m_input;
	m_double = copy.m_double;
	m_float = copy.m_float;
	m_char = copy.m_char;
	return *this;
}

void 	Convert::searchType()
{
	if (m_input == "nan" || m_input == "nanf")
	{
		cout << "char: impossible\n"
				"int: impossible\n"
				"float: nanf\n"
				"double: nan" << endl;
		exit(0);
	}
	else if (m_input == "inf" || m_input == "inff"
			|| m_input == "+inf" || m_input == "+inff")
	{
		cout << "char: impossible\n"
				"int: impossible\n"
				"float: inff\n"
				"double: inf" << endl;
		exit(0);
	}
	else if (m_input == "-inf" || m_input == "-inff")
	{
		cout << "char: impossible\n"
				"int: impossible\n"
				"float: -inff\n"
				"double: -inf" << endl;
		exit(0);
	}
	else if ((m_input.at(0) == '-' || m_input.at(0) == '+') ||
	(m_input.at(0) >= '0' && m_input.at(0) <= '9'))
	{
		if (m_input.at(m_input.length() - 1) == 'f')
		{
			m_type = 'f';
			try
			{
				m_float = std::stof(m_input);
			}
			catch (std::exception &e)
			{
				cout << "Error catched: Argument doesn't match any needed type: "
						"<char> <int> <double> <float>" << endl;
				exit(0);
			}
		}
		else if (m_input.find('.') != std::string::npos)
		{
			m_type = 'd';
			try
			{
				m_double = std::stod(m_input);
			}
			catch (std::exception &e)
			{
				cout << "Error catched: Argument doesn't match any needed type: "
						"<char> <int> <double> <float>" << endl;
				exit(0);
			}
		}
		else if (m_input.at(0) == '-' || m_input.at(0) == '+')
		{
			if (m_input.at(1) >= '0' && m_input.at(1) <= '9')
			{
				m_type = 'i';
			}
			else
			{
				cout << "Error catched: Argument doesn't match any needed type: "
						"<char> <int> <double> <float>" << endl;
				exit(0);
			}
		}
		else if (m_input.at(0) >= '0' && m_input.at(0) <= '9')
		{
			m_type = 'i';
		}
	}
	else if (m_input.length() == 1)
	{
		m_type = 'c';
		m_char = m_input.at(0);
	}
	else
	{
		cout << "Error catched: Argument doesn't match any needed type: "
				"<char> <int> <double> <float>" << endl;
		exit(0);
	}
}

void 	Convert::toChar()
{
	int tmp;
	if (m_type != 'c')
	{
		try
		{
			tmp = std::stoi(m_input);
		}
		catch (std::exception &e)
		{
			cout << "char: impossible" << endl;
			return;
		}
	}
	if (m_type == 'c')
		cout << "char: '" << m_char <<  "'" << endl;
	else if (tmp >= 32 && tmp < 127)
		cout << "char: '" << static_cast<char>(tmp) << "'" << endl;
	else if (tmp >= 0 && tmp < 32)
		cout << "char: Non displayable"<< endl;
	else
		cout << "char: impossible" << endl;
}

void 	Convert::toInt()
{
	if (m_type == 'c')
	{
		cout << "int: " << static_cast<int>(m_char) << endl;
		return;
	}
	try
	{
		size_t pos;
		m_int = std::stoi(m_input, &pos);
		if (pos == m_input.length() || m_type == 'f' || m_type == 'd')
			cout << "int: " << m_int << endl;
		else
			cout << "int: impossible" << endl;
	}
	catch (std::exception &e)
	{
		cout << "int: impossible" << endl;
	}

}

void 	Convert::toFloat()
{
	try
	{
		m_float = std::stof(m_input);
		cout << "float: " << m_float << ".0f" << endl;
	}
	catch (std::exception &exception)
	{
		cout << "float: impossible" << endl;
	}
}

void 	Convert::toDouble()
{
	try
	{
		m_double = std::stod(m_input);
		cout << "double: " << m_double << ".0" << endl;
	}
	catch (std::exception &exception)
	{
		cout << "double: impossible" << endl;
	}
}

