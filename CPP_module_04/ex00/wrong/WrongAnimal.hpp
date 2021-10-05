#pragma once

#include <iostream>
#include <string>

using std::cin;
using std::string;
using std::cout;
using std::endl;

class WrongAnimal
{
protected:
	string	m_type;
public:
	WrongAnimal();
	WrongAnimal(std::string type);
	~WrongAnimal();
	WrongAnimal(WrongAnimal &copy);
	WrongAnimal &operator=(WrongAnimal &copy);
	string	getType(void) const;
	void 	setType(string type);
	void	makeSound() const ;
};

std::ostream &operator<<(std::ostream &out, WrongAnimal &src);
