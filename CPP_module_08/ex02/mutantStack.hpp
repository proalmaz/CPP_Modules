#pragma once

# include <iostream>
# include <stack>
# include <list>
# include <algorithm>

template<class T>
class MutantStack : public std::stack<T>
{
public:
	MutantStack() {}
	MutantStack(MutantStack const &copy) { *this = copy; }
	virtual ~MutantStack() {}

	MutantStack &operator=(MutantStack const &copy)
	{
		if (this == &copy)
			return *this;
		std::stack<T>::operator=(copy);
		return *this;
	}

	typedef typename std::stack<T>::container_type::iterator iterator;

	iterator begin() { return std::stack<T>::c.begin(); }
	iterator end() { return std::stack<T>::c.end(); }
};
