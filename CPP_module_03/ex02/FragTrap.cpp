#include "FragTrap.hpp"

FragTrap::FragTrap(string name) : ClapTrap(name, 100, 100, 30)
{
	cout << "Constructor for " << m_name << " called for FragTrap" << endl;
}

FragTrap::FragTrap(void) : ClapTrap("noName", 100, 100, 30)
{
	std::cout << "Default constructor of FragTrap class called" << std::endl;
}

FragTrap::~FragTrap()
{
	cout << "Destructor for " << m_name << " called for FragTrap\n";
}

FragTrap::FragTrap(const FragTrap &copy)
{
	m_name = copy.m_name;
	m_hitPoints = copy.m_hitPoints;
	m_energyPoints = copy.m_energyPoints;
	m_attackDamage = copy.m_attackDamage;
	cout << "Copy constructor for " << m_name << " called for FragTrap\n";
}

FragTrap &FragTrap::operator=(FragTrap &copy)
{
	if (*this == copy)
		return *this;
	m_name = copy.m_name;
	m_hitPoints = copy.m_hitPoints;
	m_energyPoints = copy.m_energyPoints;
	m_attackDamage = copy.m_attackDamage;
	cout << "Assignation overload operator for " << m_name << " called for "
															 "FragTrap\n";
	return *this;
}

void FragTrap::highFivesGuys(void)
{
	cout << "High Five!" << endl;
}

std::ostream &operator<<(std::ostream &out, FragTrap const &src)
{
	out << "Name is " << src.getName() << endl <<
	"Hit Points = " << src.getHP() << endl <<
	"Energy Points = " << src.getEP() << endl <<
	"Attack Damage = " << src.getAD() << endl;
	return out;
}