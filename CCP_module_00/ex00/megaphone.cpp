#include <iostream>

static char *stringToUpper(char *str)
{
	int i = 0;
	if (!str[i])
		return NULL;
	while (str[i] != '\0')
	{
		if ((str[i] >= 97) && (str[i] <= 122))
			str[i] -= 32;
		i++;
	}
	return str;
}

int	main(int argc, char **argv)
{
	using std::cout;
	using std::endl;

	if (argc <= 1)
	{
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
		return (0);
	}
	for (int count = 1; count < argc; ++count)
		cout << stringToUpper(argv[count]);
	cout << endl;
}