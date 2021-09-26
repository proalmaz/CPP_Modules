#include "AMateria.hpp"

AMateria::AMateria()
{
	cout << "Default constructor for AMateria called" << endl;
}

AMateria::AMateria(const string &type) : m_type(type)
{
	cout << "Type constructor for AMateria called" << endl;
}

AMateria::AMateria(AMateria const &copy)
{
	m_type = copy.getType();
	cout << "Copy constructor for AMateria called" << endl;
}

AMateria::~AMateria()
{
	cout << "Destructor for AMateria called" << endl;
}

AMateria	&AMateria::operator=(AMateria const &copy)
{
	cout << "Assignation operator overload for AMateria called" << endl;
	if (this == &copy)
		return *this;
	m_type = copy.getType();
	return *this;
}

string	const	&AMateria::getType() const { return m_type; }

void 	AMateria::use(int &target)
{
	(void)target;
}