#include "ClapTrap.hpp"

ClapTrap::ClapTrap(string name) : m_name(name), m_attackDamage(0),
m_energyPoints(10), m_hitPoints(10)
{
	cout << "Constructor for " << m_name << " called" << endl;
}

ClapTrap::~ClapTrap()
{
	cout << "Destructor for " << m_name << " called" << endl;
}

ClapTrap::ClapTrap(ClapTrap &copy)
{
	m_hitPoints = copy.m_hitPoints;
	m_energyPoints = copy.m_energyPoints;
	m_attackDamage = copy.m_attackDamage;
	m_name = copy.m_name;
}

ClapTrap &ClapTrap::operator=(ClapTrap &copy)
{
	m_hitPoints = copy.m_hitPoints;
	m_energyPoints = copy.m_energyPoints;
	m_attackDamage = copy.m_attackDamage;
	m_name = copy.m_name;

	return *this;
}

void ClapTrap::attack(const string &target)
{
	cout << "ClapTrap " << m_name << " attack " << target << " causing " <<
	m_attackDamage << " points of damage!" << endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	cout << "ClapTrap " << m_name << " take " << amount << " points of damage!" <<
	endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	cout << "ClapTrap " << m_name << " take " << amount << " points of heal!" <<
	endl;
}