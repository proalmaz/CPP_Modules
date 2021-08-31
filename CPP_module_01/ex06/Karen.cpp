#include "Karen.hpp"

void Karen::debug()
{
	cout << "[ DEBUG ]\n" << "I love to get extra bacon"
 "for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love "
 "it!" << endl;
}

void Karen::info()
{
	cout << "[ INFO ]\n" << "I cannot believe adding extra"
 "bacon cost more money. You don’t put enough! If you did I would not have to ask"
 "for it!" << endl;
}

void Karen::warning()
{
	cout << "[ WARNING ]\nI think I deserve to have some extra bacon for free. "
	"I’ve been coming here for years and you just started working here last "
	"month." << endl;
}

void Karen::error()
{
	cout << "[ ERROR ]\nThis is unacceptable, I want to speak to the manager "
			"now."	<< endl;
}

void Karen::complain(int level)
{
	string	arrays[4] = {"debug", "info", "warning", "error"};
	void (Karen::*funcPtr[4])() = {
			&Karen::debug,
			&Karen::info,
			&Karen::warning,
			&Karen::error
	};
	switch (level)
	{
		case 0:	(this->*funcPtr[level])(); break;
		case 1:	(this->*funcPtr[level])(); break;
		case 2:	(this->*funcPtr[level])(); break;
		case 3:	(this->*funcPtr[level])(); break;
		default:
			cout << "[ Probably complaining about insignificant problems ]\n";
			break;
	}
}