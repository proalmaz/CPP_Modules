#include "Zombie.hpp"

Zombie::Zombie(string name) { m_name = name; }

Zombie::~Zombie()
{
	cout << "Zombie " << m_name << " has died" << endl;
}

void Zombie::announce()
{
	cout << "This zombie is " << m_name << endl;
}