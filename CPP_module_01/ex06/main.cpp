#include "Karen.hpp"

static int checkLevel(string str)
{
	string	arrays[4] = {"debug", "info", "warning", "error"};
	for (int i = 0; i < 4; ++i)
	{
		if (str == arrays[i])
			return i;
	}
	return -1;
}

int main(int argc, char **argv)
{
	Karen karen;
	if (!argv[1])
		return 1;
	karen.complain(checkLevel(static_cast<string>(argv[1])));
	return 0;
}