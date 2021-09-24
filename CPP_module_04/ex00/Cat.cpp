#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	cout << "Default constructor for Cat called" << endl;
}

Cat::Cat(string type) : Animal(type)
{
	cout << "Name constructor for Cat called" << endl;
}

Cat::Cat(Cat &copy)
{
	cout << "Copy constructor for Animal called" << endl;
	*this = copy;
}

Cat::~Cat()
{
	cout << "Default destructor for Cat called" << endl;
}

Cat &Cat::operator=(Cat &copy)
{
	cout << "Assignation operator of Cat overload called" << endl;
	if (this == &copy)
		return *this;
	m_type = copy.getType();
	return *this;
}

void Cat::makeSound() const
{
	cout << m_type << " say Meow!" << endl;
}

std::ostream &operator<<(std::ostream &out, Cat &src)
{
	cout << "Type of this animal is " << src.getType() << endl;
	return out;
}