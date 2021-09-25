#include "Cat.hpp"

Cat::Cat() : Animal("Cat"), m_brain(new Brain())
{
	cout << "Default constructor for Cat called" << endl;
}

Cat::Cat(string type) : Animal(type), m_brain(new Brain())
{
	cout << "Name constructor for Cat called" << endl;
}

Cat::Cat(Cat &copy) : m_brain(new Brain())
{
	cout << "Copy constructor for Animal called" << endl;
	*this = copy;
}

Cat::~Cat()
{
	cout << "Default destructor for Cat called" << endl;
	delete m_brain;
}

Cat &Cat::operator=(Cat &copy)
{
	cout << "Assignation operator of Cat overload called" << endl;
	if (this == &copy)
		return *this;
	m_type = copy.getType();
	*m_brain = *copy.m_brain;
	return *this;
}

void Cat::makeSound() const
{
	cout << m_type << " say Meow!" << endl;
}

Brain &Cat::getBrain() { return *m_brain; }

std::ostream &operator<<(std::ostream &out, Cat &src)
{
	cout << "Type of this animal is " << src.getType() << endl;
	return out;
}