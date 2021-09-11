#pragma once

#include <iostream>
#include <string>
#include <cmath>

using std::cin;
using std::string;
using std::cout;
using std::endl;

class ClapTrap
{
private:
	string	m_name;
	int 	m_hitPoints;
	int 	m_energyPoints;
	int 	m_attackDamage;

public:
	ClapTrap(string name);
	~ClapTrap();
	ClapTrap(ClapTrap &copy);
	ClapTrap &operator=(ClapTrap &copy);
	void	attack(string const &target);
	void 	takeDamage(unsigned int amount);
	void 	beRepaired(unsigned int amount);
};
