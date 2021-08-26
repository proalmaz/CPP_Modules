#pragma once

#include "Weapon.hpp"

using std::cin;
using std::string;
using std::cout;
using std::endl;

class Weapon;

class HumanA
{
private:
	Weapon	&m_weapon;
	string	m_name;
public:
	HumanA(string name, Weapon &weapon);
	~HumanA();
	void attack();
};
