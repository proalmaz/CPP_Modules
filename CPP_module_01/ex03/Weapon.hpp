#pragma once

#include <iostream>
#include <string>

using std::cin;
using std::string;
using std::cout;
using std::endl;

class Weapon
{
private:
	string	m_type;
public:
	Weapon();
	Weapon(string typeWeapon);
	~Weapon();
	void setType(string type);
	const string &getType();
};