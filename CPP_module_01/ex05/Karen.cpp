#include "Karen.hpp"

void Karen::debug()
{
	cout << "\"I love to get extra bacon\n"
 "for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love "
 "it!" << endl;
}

void Karen::info()
{
	cout << "I cannot believe adding extra\n"
 "bacon cost more money. You don’t put enough! If you did I would not have to ask\n"
 "for it!" << endl;
}

void Karen::warning()
{
	cout << "I think I deserve to have some extra bacon for free. I’ve been"
	"coming here for years and you just started working here last month." <<
	endl;
}

void Karen::error()
{
	cout << "This is unacceptable, I want to speak to the manager now." << endl;
}

void Karen::complain(string level)
{
	string	arrays[4] = {"debug", "info", "warning", "error"};
	void (Karen::*funcPtr[4])() = {
			&Karen::debug,
			&Karen::info,
			&Karen::warning,
			&Karen::error
	};
	for (int i = 0; i < 4; ++i)
	{
		if (arrays[i] == level)
			(this->*funcPtr[i])();
	}
}