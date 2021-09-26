#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	cout << "Default constructor for Cure called" << endl;
}

Cure::Cure(const Cure &copy)
{
	cout << "Copy constructor for Cure called" << endl;
	*this = copy;
}

Cure::~Cure()
{
	cout << "Destructor for Cure called" << endl;
}

Cure	&Cure::operator=(const Cure &copy)
{
	cout << "Assignation operator overload for Cure called" << endl;
	if (this == &copy)
		return *this;
	m_type = copy.getType();
	return *this;
}

AMateria	*Cure::clone() const
{
	return (new Cure);
}

void 		Cure::use(ICharacter &target)
{
	cout << "* heals " << target.getName() << "’s wounds *" << endl;
}