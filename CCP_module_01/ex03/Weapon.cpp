#include "Weapon.hpp"

Weapon::Weapon()
{}

Weapon::Weapon(string typeWeapon)
{
	m_type = typeWeapon;
}

Weapon::~Weapon()
{
	cout << "No more weapons, only peace" << endl;
}

void Weapon::setType(string type)
{
	m_type = type;
}

const string &Weapon::getType()
{
	return m_type;
}