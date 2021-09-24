#pragma once

#include "Animal.hpp"

class Dog : public Animal
{
public:
	Dog();
	Dog(string type);
	Dog(Dog &copy);
	~Dog();

	Dog &operator=(Dog &copy);
	void makeSound() const;
};

std::ostream &operator<<(std::ostream &out, Dog &src);