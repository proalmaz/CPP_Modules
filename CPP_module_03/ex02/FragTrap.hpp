#pragma once

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	FragTrap();
	FragTrap(string name);
	~FragTrap();
	FragTrap(const FragTrap &copy);

	FragTrap	&operator=(FragTrap &copy);

	void 		highFivesGuys(void);
};

std::ostream &operator<<(std::ostream &out, FragTrap const &src);