#pragma once

#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;

class Zombie
{
private:
	string	m_name;
public:
	Zombie();
	Zombie(string name);
	~Zombie();
	void announce();
	void setName(string name);
};

void	randomChamp(string name);
Zombie	*newZombie(string name);
Zombie	*zombieHorde(int N, string name );