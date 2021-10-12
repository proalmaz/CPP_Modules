#include "span.hpp"

span::span() : m_N(0) {}

span::span(int N) : m_N(N)  { m_array.reserve(m_N); }

span::span(const span &copy) { *this = copy; }

span::~span() { m_array.clear(); }

span	&span::operator=(span const &copy)
{
	if (this == &copy)
		return *this;
	m_array = copy.m_array;
	m_N = copy.m_N;
	return *this;
}

void 	span::addNumber(int number) throw(class span::OutOfRangeException)
{
	if (m_array.size() >= m_N)
		throw OutOfRangeException();
	m_array.push_back(number);
}

void 	span::fillArray(int N)
{
	for (unsigned int i = m_array.size(); i < m_N; ++i)
		addNumber(rand() % N);
}

long	span::shortestSpan() throw(class span::NotEnoughArgumentException)
{
	if (m_array.size() < 2)
		throw NotEnoughArgumentException();

	std::vector<int> tmp = m_array;
	std::vector<int>::iterator itBegin = tmp.begin();
	std::vector<int>::iterator itEnd = tmp.end();

	std::sort(tmp.begin(), tmp.end());
	return (static_cast<long>(tmp[1] - tmp[0]));
}

long 	span::longestSpan() throw(class span::NotEnoughArgumentException)
{
	if (m_array.size() < 2)
		throw NotEnoughArgumentException();

	std::vector<int>::iterator itBegin = m_array.begin();
	std::vector<int>::iterator itEnd = m_array.end();
	int		minValue = *std::min_element(itBegin, itEnd);
	int 	maxValue = *std::max_element(itBegin, itEnd);

	return (static_cast<long>(maxValue - minValue));
}