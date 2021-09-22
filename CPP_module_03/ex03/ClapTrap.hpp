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
	ClapTrap(string const &name);
	ClapTrap(string const &name="", int HP=0, int EP=0, int AD=0);
	ClapTrap(ClapTrap &copy);
	~ClapTrap();
	ClapTrap &operator=(ClapTrap &copy);
	void	attack(string const &target);
	void 	takeDamage(unsigned int amount);
	void 	beRepaired(unsigned int amount);
	string	getName() const;
	int 	getHP() const;
	int 	getEP() const;
	int 	getAD() const;
	void 	setHP(int hp);
	void 	setEP(int ep);
	void 	setAD(int ad);
	void 	setName(string const &name);
};

std::ostream&	operator<<(std::ostream& out, ClapTrap const & src);