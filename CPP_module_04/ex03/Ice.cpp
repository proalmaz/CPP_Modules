#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
//	cout << "Default constructor for Ice called" << endl;
}

Ice::Ice(const Ice &copy)
{
//	cout << "Copy constructor for Ice called" << endl;
	*this = copy;
}

Ice::~Ice()
{
//	cout << "Destructor for Ice called" << endl;
}

Ice	&Ice::operator=(const Ice &copy)
{
//	cout << "Assignation operator overload for Ice called" << endl;
	if (this == &copy)
		return *this;
	m_type = copy.getType();
	return *this;
}

AMateria	*Ice::clone() const
{
	return (new Ice);
}

void 		Ice::use(ICharacter &target)
{
	cout << "* shoots an ice bolt at " << target.getName() <<
	" *" << endl;
}