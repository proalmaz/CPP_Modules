#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	cout << "Default constructor for WrongAnimal called" << endl;
	m_type = "???";
}

WrongAnimal::WrongAnimal(std::string type) : m_type(type)
{
	cout << "Name constructor for WrongAnimal called" << endl;
}

WrongAnimal::~WrongAnimal()
{
	cout << "Default destructor for WrongAnimal called" << endl;
}

WrongAnimal::WrongAnimal(WrongAnimal &copy)
{
	cout << "Copy constructor for WrongAnimal called" << endl;
	m_type = copy.m_type;
}

WrongAnimal	&WrongAnimal::operator=(WrongAnimal &copy)
{
	cout << "Assignation operator overload called" << endl;
	if (this == &copy)
		return *this;
	m_type = copy.m_type;
	return *this;
}

string	WrongAnimal::getType() const { return m_type; }

void 	WrongAnimal::setType(string type) { m_type = type; }

void 	WrongAnimal::makeSound() const
{
	cout << m_type << " can't make sound" << endl;
}

std::ostream &operator<<(std::ostream &out, WrongAnimal &src)
{
	out << src.getType() << endl;
	return out;
}