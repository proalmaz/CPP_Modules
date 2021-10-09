#include "whatever.hpp"

int main()
{
	cout << "_______SWAP_TEST_______" << endl;
	double x = 100000;
	double y = 200000;
	cout << "Before swap" << endl;
	cout << "First value: " << x << endl;
	cout << "Second value: " << y << endl << endl;
	::swap(x, y);
	cout << "After swap" << endl;
	cout << "First value: " << x << endl;
	cout << "Second value: " << y << endl;
	cout << "_______MIN_TEST_______" << endl;
	cout << "Min value: " << ::min(x, y) << endl;
	cout << "_______MAX_TEST_______" << endl;
	cout << "Min value: " << ::max(x, y) << endl<< endl;

	cout << "_______TEST_FROM_SUBJECT______" << endl;
	int a = 2;
	int b = 3;
	::swap(a, b);
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
}