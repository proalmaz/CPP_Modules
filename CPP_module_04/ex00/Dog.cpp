#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	cout << "Default constructor for Dog called" << endl;
}

Dog::Dog(string type) : Animal(type)
{
	cout << "Name constructor for Dog called" << endl;
}

Dog::Dog(Dog &copy)
{
	cout << "Copy constructor for Animal called" << endl;
	*this = copy;
}

Dog::~Dog()
{
	cout << "Default destructor for Dog called" << endl;
}

Dog &Dog::operator=(Dog &copy)
{
	cout << "Assignation operator of Dog overload called" << endl;
	if (this == &copy)
		return *this;
	m_type = copy.getType();
	return *this;
}

void Dog::makeSound() const
{
	cout << m_type << " say Woof!" << endl;
}

std::ostream &operator<<(std::ostream &out, Dog &src)
{
	cout << "Type of this animal is " << src.getType() << endl;
	return out;
}