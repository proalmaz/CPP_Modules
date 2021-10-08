#include "Convert.hpp"

int main(int argc, char **argv)
{
	string input(argv[1]);
	Convert *tmp = new Convert(input);
	return 0;
}
