#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	cout << "Default constructor for WrongCat called" << endl;
}

WrongCat::WrongCat(string type) : WrongAnimal(type)
{
	cout << "Name constructor for WrongCat called" << endl;
}

WrongCat::WrongCat(WrongCat &copy)
{
	cout << "Copy constructor for WrongAnimal called" << endl;
	*this = copy;
}

WrongCat::~WrongCat()
{
	cout << "Default destructor for WrongCat called" << endl;
}

WrongCat &WrongCat::operator=(WrongCat &copy)
{
	cout << "Assignation operator of WrongCat overload called" << endl;
	if (this == &copy)
		return *this;
	m_type = copy.getType();
	return *this;
}

void WrongCat::makeSound() const
{
	cout << m_type << " say Meow!" << endl;
}

std::ostream &operator<<(std::ostream &out, WrongCat &src)
{
	cout << "Type of this animal is " << src.getType() << endl;
	return out;
}