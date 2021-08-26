#include "Zombie.hpp"

Zombie	*newZombie(string name)
{
	return new Zombie(name);
}

Zombie	*zombieHorde(int N, std::string name )
{
	Zombie *array;
	array = new Zombie[N];

	for (int i = 0; i < N; ++i)
		array[i].setName(name);
	return (array);
}