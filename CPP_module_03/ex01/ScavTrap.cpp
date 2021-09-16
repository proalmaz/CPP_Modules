#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("emptyName", 100, 50, 20)
{
	cout << "Default constructor for ScavTrap called" << endl;
}

ScavTrap::ScavTrap(const string &name) : ClapTrap(name, 100, 50, 20)
{
	cout << "Name constructor for ScavTrap called" << endl;
}