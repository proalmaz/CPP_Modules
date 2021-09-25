#pragma once

#include <iostream>
#include <string>

using std::cin;
using std::string;
using std::cout;
using std::endl;

class Animal
{
protected:
	string	m_type;

public:
	Animal();
	Animal(std::string type);
	Animal(Animal &copy);
	virtual ~Animal();
	Animal &operator=(Animal &copy);

	string	getType(void) const;
	void 	setType(string type);
	virtual void	makeSound() const;
};

std::ostream &operator<<(std::ostream &out, Animal &src);