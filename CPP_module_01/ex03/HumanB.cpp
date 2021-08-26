#include "HumanB.hpp"

HumanB::HumanB(string name) : m_name(name)
{}

HumanB::~HumanB()
{
	cout << m_name << " has died" << endl;
}

void HumanB::attack()
{
	cout << m_name << " attacks with his " << m_weapon->getType() << endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	m_weapon = &weapon;
}