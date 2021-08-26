#include "Zombie.hpp"

Zombie *newZombie(string name)
{
	return new Zombie(name);
}

void randomChamp(string name)
{
	Zombie *zombie = newZombie(name);
	zombie->announce();
	delete zombie;
}

int main()
{
	randomChamp("Alex");
	return 0;
}