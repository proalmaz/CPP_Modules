#include "Zombie.hpp"

int main()
{
	randomChamp("Alex");
	Zombie *zombie = newZombie("Alisa");
	zombie->announce();
	delete zombie;
	return 0;
}