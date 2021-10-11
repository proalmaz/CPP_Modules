#pragma once

#include <iostream>
#include <exception>

class notFoundException : public std::exception
{
public:
	virtual const char* what() const throw()
	{ return "Not found value in this container"; }
};

template <typename T>
typename T::iterator easyfind(T array, int value)
{
	typename T::iterator result;
	result = std::find(array.begin(), array.end(), value);
	if (result == array.end())
		throw notFoundException();
	return result;
}