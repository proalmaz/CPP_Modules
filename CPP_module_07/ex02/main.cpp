#include "Array.hpp"

int main()
{
	Array<int> array(8);
	for (int i = 0; i < 8; ++i)
		array[i] = i;
	Array<int> copy1;
	copy1 = array;
	cout << copy1;
	try
	{
		cout << array << std::endl;
	}
	catch (std::exception &e)
	{
		cout << "Error: " << e.what() << endl;
	}
}