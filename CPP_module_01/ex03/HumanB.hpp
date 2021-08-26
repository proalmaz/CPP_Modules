#pragma once

#include "Weapon.hpp"

using std::cin;
using std::string;
using std::cout;
using std::endl;

class Weapon;

class HumanB
{
private:
	Weapon	*m_weapon;
	string	m_name;
public:
	HumanB(string name);
	~HumanB();
	void setWeapon(Weapon &weapon);
	void attack();
};