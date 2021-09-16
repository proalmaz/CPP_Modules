#include "ClapTrap.hpp"

int main()
{
	ClapTrap Almaz("Almaz");

	Almaz.attack("Smbd");
	Almaz.takeDamage(7);
	Almaz.beRepaired(5);
	return 0;
}
