#include "Zombie.hpp"

int main()
{
	Zombie *zombieArray;
	zombieArray = zombieHorde(4, "GLHF");
	for (int i = 0; i < 4; ++i)
		zombieArray[i].announce();
	delete []zombieArray;
	return 0;
}