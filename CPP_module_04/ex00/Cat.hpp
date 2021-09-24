#pragma once

#include "Animal.hpp"

class Cat : public Animal
{
public:
	Cat();
	Cat(string type);
	Cat(Cat &copy);
	~Cat();

	Cat &operator=(Cat &copy);
	void makeSound() const;
};

std::ostream &operator<<(std::ostream &out, Cat &src);