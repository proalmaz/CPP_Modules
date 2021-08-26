#include "HumanA.hpp"

HumanA::HumanA(string name, Weapon &weapon) : m_weapon(weapon)
{
	m_name = name;
}

HumanA::~HumanA()
{
	cout << m_name << " has died" << endl;
}

void HumanA::attack()
{
	cout << m_name << " attacks with his " << m_weapon.getType() << endl;
}