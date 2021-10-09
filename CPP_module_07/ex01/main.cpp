#include "iter.hpp"

int main()
{
	cout << "_______INT_TEST_______" << endl;
	int array[5] = {1, 2, 3, 4, 5};
	::iter(array, 5, ::print);
	cout << "_______STRING_TEST_______" << endl;
	string str_array[4] = {"str1", "str2", "str3", "str4"};
	::iter(str_array, 4, ::print);
}