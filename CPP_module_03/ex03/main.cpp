#include "DiamondTrap.hpp"

int main()
{
	cout << "\n####################Constructors#####################\n" << endl;

	DiamondTrap o;
	std::cout << "--------------------------------------" << std::endl;
	DiamondTrap stan("Stanly");
	std::cout << "--------------------------------------" << std::endl;
	DiamondTrap bob("BOB Wans");
	std::cout << "--------------------------------------" << std::endl;
	DiamondTrap copyStan(stan);

	std::cout << "--------------------------------------" << std::endl;
	std::cout << o << std::endl;
	std::cout << stan << std::endl;
	std::cout << bob << std::endl;

	o.setAD(321);
	o.DiamondTrap::setName("Dwight");
	std::cout << "--------------------------------------" << std::endl;
	std::cout << o << std::endl;

	stan.beRepaired(100);
	std::cout << stan << std::endl;
	bob.ScavTrap::attack("Stanly");
	stan.takeDamage(bob.getAD());
	std::cout << stan << std::endl;
	copyStan.highFivesGuys();
	stan.whoAmI();

	cout << endl;
	cout << "####################Destructors#####################" << endl;
	cout << endl;
	return (0);
}
