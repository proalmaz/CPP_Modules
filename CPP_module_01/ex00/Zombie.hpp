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
	Zombie(string name);
	~Zombie();
	void announce();
};

void	randomChamp(string name);
Zombie	*newZombie(string name);