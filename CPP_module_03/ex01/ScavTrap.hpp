#pragma once

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
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
};

std::ostream &operator<<(std::ostream &out, ScavTrap const &src);