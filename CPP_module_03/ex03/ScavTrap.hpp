#pragma once

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
private:
	string m_name;

public:
	ScavTrap();
	ScavTrap(const ScavTrap &copy);
	ScavTrap(string const &name);
	~ScavTrap();

	ScavTrap	&operator=(const ScavTrap &copy);
	void 		guardGate();
	void 		attack(string const &target);
};

std::ostream &operator<<(std::ostream &out, ScavTrap const &src);