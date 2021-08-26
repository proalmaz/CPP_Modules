#include "Zombie.hpp"

Zombie::Zombie(string name)
{
	m_name = name;
	cout << "Hello, i'm zombie " << name << endl;
}

Zombie::~Zombie()
{
	cout << "Zombie " << m_name << " has died" << endl;
}

void Zombie::announce()
{
	cout << m_name << "  BraiiiiiiinnnzzzZ..." << endl;
}