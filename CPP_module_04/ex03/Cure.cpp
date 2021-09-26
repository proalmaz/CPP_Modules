#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	cout << "Default constructor for Cure called" << endl;
}

AMateria	*Cure::clone() const
{
	AMateria *tmp;
	tmp = new Cure(m_type);
	return tmp;
}

void 		Cure::use(ICharacter &target)
{
	cout << "* heals " << target << "’s wounds *" << endl;
}