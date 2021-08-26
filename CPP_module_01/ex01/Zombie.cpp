#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::Zombie(string name)
{
	m_name = name;
	cout << "Hello, i'm zombie " << name << endl;
}

void Zombie::setName(string name)
{
	m_name = name;
}

Zombie::~Zombie()
{
	cout << "Zombie " << m_name << " has died" << endl;
}

void Zombie::announce()
{
	cout << m_name << "  BraiiiiiiinnnzzzZ..." << endl;
}