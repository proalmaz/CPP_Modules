#include "Dog.hpp"

Dog::Dog() : Animal("Dog"), m_brain(new Brain())
{
	cout << "Default constructor for Dog called" << endl;
}

Dog::Dog(string type) : Animal(type), m_brain(new Brain())
{
	cout << "Name constructor for Dog called" << endl;
}

Dog::Dog(Dog &copy) : m_brain(new Brain())
{
	cout << "Copy constructor for Animal called" << endl;
	*this = copy;
}

Dog::~Dog()
{
	cout << "Default destructor for Dog called" << endl;
	delete m_brain;
}

Dog &Dog::operator=(Dog &copy)
{
	cout << "Assignation operator of Dog overload called" << endl;
	if (this == &copy)
		return *this;
	m_type = copy.getType();
	*m_brain = *copy.m_brain;
	return *this;
}

void Dog::makeSound() const
{
	cout << m_type << " say Woof!" << endl;
}

Brain &Dog::getBrain() {return *m_brain; }

std::ostream &operator<<(std::ostream &out, Dog &src)
{
	cout << "Type of this animal is " << src.getType() << endl;
	return out;
}