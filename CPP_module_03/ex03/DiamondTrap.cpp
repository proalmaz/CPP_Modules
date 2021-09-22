#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap()
{
	m_name = "noName";
	cout << "Default constructor for " << m_name <<
	" for DiamondTrap class called" << endl;
	ClapTrap::m_name = m_name + "_clap_name";
	FragTrap::m_hitPoints = 0;
	ScavTrap::m_energyPoints = 0;
	FragTrap::m_attackDamage = 0;
}

DiamondTrap::DiamondTrap(const string &name) : m_name(name)
{
	ClapTrap::setName(name);
	cout << "Name constructor for " << m_name <<
	" of DiamondTrap class called" << endl;
	FragTrap::m_hitPoints = 50;
	ScavTrap::m_energyPoints = 50;
	FragTrap::m_attackDamage = 15;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy) : ClapTrap(), ScavTrap(), FragTrap()
{
	cout << "Copy constructor for " << copy.m_name <<
	" of DiamondTrap class called" << endl;
	*this = copy;
}

DiamondTrap::~DiamondTrap()
{
	cout << "Destructor for " << m_name <<
	" of DiamondTrap class called" << endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &copy)
{
	if (this == &copy)
		return *this;
	m_name = copy.DiamondTrap::getName();
	ClapTrap::m_name = copy.ClapTrap::getName();
	FragTrap::m_hitPoints = copy.getHP();
	ScavTrap::m_energyPoints = copy.getEP();
	FragTrap::m_attackDamage = copy.getAD();
	return *this;
}

string	DiamondTrap::getName(void) const { return m_name; }

void	DiamondTrap::setName(string const &name) { m_name = name; }

void 	DiamondTrap::whoAmI() const
{
	cout << "My name in DiamondTrap is " << m_name <<
	"\nMy name in ClapTrap is " << ClapTrap::getName() << endl;
}

std::ostream	&operator<<(std::ostream &out, DiamondTrap const &src)
{
	out << "DiamondTrap name is " << src.DiamondTrap::getName() << endl;
	out << "ClapTrap name is " << src.ClapTrap::getName() << endl;
	out << "HP = " << src.FragTrap::getHP() << endl;
	out << "EP = " << src.ScavTrap::getEP() << endl;
	out << "AD = " << src.FragTrap::getAD() << endl;
	return out;
}