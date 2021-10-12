#include "span.hpp"

int main()
{
	srand(time(NULL));
	span sp(5);

	try {
		sp.longestSpan();
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try {
		sp.shortestSpan();
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	try {
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	try {
		sp.addNumber(2);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "shortest span: " << sp.shortestSpan() << std::endl;
	std::cout << "longest  span: " << sp.longestSpan() << std::endl << std::endl;

	span megaspan(10000);
	megaspan.fillArray(std::numeric_limits<int>::max());
	std::cout << "shortest span: " << megaspan.shortestSpan() << std::endl;
	std::cout << "longest  span: " << megaspan.longestSpan() << std::endl;
}