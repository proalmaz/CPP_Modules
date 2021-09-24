#pragma once

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
	WrongCat();
	WrongCat(string type);
	WrongCat(WrongCat &copy);
	~WrongCat();
	WrongCat &operator=(WrongCat &copy);
	void makeSound() const;
};

std::ostream &operator<<(std::ostream &out, WrongCat &src);