#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain *m_brain;

public:
	Dog();
	Dog(string type);
	Dog(Dog &copy);
	~Dog();

	Dog		&operator=(Dog &copy);
	void	makeSound() const;
	Brain	&getBrain();
};

std::ostream &operator<<(std::ostream &out, Dog &src);