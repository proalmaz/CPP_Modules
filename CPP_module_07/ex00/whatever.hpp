#pragma once

#include <iostream>

using std::cin;
using std::string;
using std::cout;
using std::endl;

template <typename T>
void 	swap(T *a, T *b)
{
	T tmp = *a;
	*a = *b;
	*b = tmp;
}

template <typename T>
const T 	&min(const T &x, const T &y)
{
	if (x < y)
		return x;
	else
		return y;
}

template <typename T>
const T 	&max(const T &x, const T &y)
{
	if (x > y)
		return x;
	else
		return y;
}
