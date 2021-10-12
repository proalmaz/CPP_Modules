#pragma once

#include <iostream>
#include <vector>
#include <exception>
#include <algorithm>

using std::cin;
using std::string;
using std::cout;
using std::endl;

class span
{
private:
	unsigned int	m_N;
	std::vector<int>m_array;

public:
	span();
	span(int N);
	span(span const &copy);
	~span();

	span	&operator=(span const &copy);

	class OutOfRangeException : public std::exception
	{
	public:
		virtual const char *	what(void) const throw()
		{
			return ("Out of range");
		}
	};
	class NotEnoughArgumentException : public std::exception
	{
	public:
		virtual const char *	what(void) const throw()
		{
			return ("Not enough arguments");
		}
	};

	void 	addNumber(int number) throw(OutOfRangeException);
	long 	shortestSpan()	throw(NotEnoughArgumentException);
	long 	longestSpan() throw(NotEnoughArgumentException);
	void 	fillArray(int N);
};
