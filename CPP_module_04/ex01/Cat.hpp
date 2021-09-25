#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain *m_brain;

public:
	Cat();
	Cat(string type);
	Cat(Cat &copy);
	~Cat();

	Cat		&operator=(Cat &copy);
	void	makeSound() const;
	Brain	&getBrain();
};

std::ostream &operator<<(std::ostream &out, Cat &src);