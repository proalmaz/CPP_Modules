#pragma once

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
private:
	std::string m_name;

public:
	DiamondTrap();
	DiamondTrap(string const &name);
	DiamondTrap(DiamondTrap const &copy);
	~DiamondTrap();

	DiamondTrap	&operator=(DiamondTrap const &copy);

	string		&getName(void);
	void 		setName(string const &name);

	void 		whoAmI(void) const;
};

std::ostream &operator<<(std::ostream &out, DiamondTrap const &src);