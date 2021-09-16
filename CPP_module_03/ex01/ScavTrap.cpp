#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("emptyName", 100, 50, 20)
{
	cout << "Default constructor for ScavTrap called" << endl;
}

ScavTrap::ScavTrap(const string &name) : ClapTrap(name, 100, 50, 20)
{
	cout << "Name constructor for ScavTrap called" << endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy.m_name, copy
.m_hitPoints, copy.m_energyPoints, copy.m_attackDamage)
{
	cout << "Copy constructor for ScavTrap called" << endl;
}

ScavTrap::~ScavTrap()
{
	cout << "Destructor in ScavTrap for " << ClapTrap::getName() << " called"
	<< endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &copy)
{
	cout << "Assignation operator for ScavTrap called" << endl;
	m_name = copy.m_name;
	m_hitPoints = copy.m_hitPoints;
	m_energyPoints = copy.m_energyPoints;
	m_attackDamage = copy.m_attackDamage;
	return *this;
}

void 	ScavTrap::attack(const string &target)
{
	cout << ClapTrap::getName() << " hit " << target << endl;
	ClapTrap::attack(target);
}

void 	ScavTrap::guardGate()
{
	cout << ClapTrap::getName() << " have enterred in Gate keeper mode" << endl;
}

std::ostream &operator<<(std::ostream &out, ScavTrap const &src)
{
	out << "Name is " << src.getName() << endl <<
	"Hit Points = " << src.getHP() << endl <<
	"Energy Points = " << src.getEP() << endl <<
	"Attack Damage = " << src.getAD() << endl;
	return out;
}