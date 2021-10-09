#pragma once

#include <iostream>

using std::cin;
using std::string;
using std::cout;
using std::endl;

template <typename T>
void iter(T *array, size_t len, void (*f)(T const &))
{
	if (array)
	{
		for (int i = 0; i < len; ++i)
			f(array[i]);
	}
}

template <typename T>
void 	print(T &x)
{
	cout << x << endl;
}