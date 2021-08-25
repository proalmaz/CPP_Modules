#include "Zombie.hpp"

Zombie *newZombie(string name)
{
	Zombie zombie(name);
	return (&zombie);
}

void randomChamp(string name)
{
	newZombie(name)->announce();
}

int main()
{
	randomChamp("Alex");
	return 0;
}