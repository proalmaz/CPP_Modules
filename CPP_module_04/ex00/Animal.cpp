#include "Animal.hpp"

Animal::Animal()
{
	cout << "Default constructor for Animal called" << endl;
	m_type = "???";
}

Animal::Animal(std::string type) : m_type(type)
{
	cout << "Name constructor for Animal called" << endl;
}

Animal::~Animal()
{
	cout << "Default destructor for Animal called" << endl;
}

Animal::Animal(Animal &copy)
{
	cout << "Copy constructor for Animal called" << endl;
	m_type = copy.m_type;
}

Animal	&Animal::operator=(Animal &copy)
{
	cout << "Assignation operator overload called" << endl;
	if (this == &copy)
		return *this;
	m_type = copy.m_type;
	return *this;
}

string	Animal::getType() const { return m_type; }

void 	Animal::setType(string type) { m_type = type; }

void 	Animal::makeSound() const
{
	cout << m_type << " can't make sound" << endl;
}

std::ostream &operator<<(std::ostream &out, Animal &src)
{
	out << src.getType() << endl;
	return out;
}