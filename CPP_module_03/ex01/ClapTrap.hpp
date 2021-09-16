#pragma once

#include <iostream>
#include <string>

using std::cin;
using std::string;
using std::cout;
using std::endl;

class ClapTrap
{
protected:
	string	m_name;
	int 	m_hitPoints;
	int 	m_energyPoints;
	int 	m_attackDamage;

public:
	ClapTrap(string name);
	ClapTrap(string name="", int HP=0, int EP=0, int AD=0);
	~ClapTrap();
	ClapTrap(ClapTrap &copy);
	ClapTrap &operator=(ClapTrap &copy);
	void	attack(string const &target);
	void 	takeDamage(unsigned int amount);
	void 	beRepaired(unsigned int amount);
};
