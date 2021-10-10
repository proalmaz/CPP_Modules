#pragma once

#include <iostream>

using std::cin;
using std::string;
using std::cout;
using std::endl;

template <class T>
class Array
{
private:
	int m_len;
	T	*m_data;

public:
	Array() : m_len(0), m_data(NULL) {}
	Array(int len) : m_len(len)
	{
		if (len > 0)
			m_data = new T[m_len];
		else
			m_data = NULL;
	}
	Array(Array<T> const &copy) { *this = copy; }
	~Array() {delete []m_data; }

	Array<T> &operator=(Array<T> const &copy)
	{
		if (m_len > 0)
			delete []m_data;
		if (copy.m_len > 0)
		{
			m_len = copy.m_len;
			m_data = new T[m_len];
			for (int i = 0; i < m_len; ++i)
				m_data[i] = copy.m_data[i];
		}
		m_len = copy.m_len;
		return *this;
	}
	T	&operator[](int index)
	{
		if (index < 0 || index >= m_len)
			throw ArrayException();
		return m_data[index];
	}
	T const	&operator[](int const index) const
	{
		if (index < 0 || index >= m_len)
			throw ArrayException();
		return m_data[index];
	}

	int 		getLen() { return m_len; }
	Array<T>	getData() { return m_data; }

	class ArrayException : public std::exception
	{
	public:
		const char* what() const throw() { return "Invalid index"; }
	};
};

template <typename T>
std::ostream &operator<<(std::ostream &out, Array<T> &array)
{
	for (int i = 0; i < array.getLen(); ++i)
	{
		cout << array[i] << endl;
	}
	return out;
}