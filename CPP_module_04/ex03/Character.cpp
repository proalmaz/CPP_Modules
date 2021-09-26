#include "Character.hpp"

void 	Character::m_setEmptyBag()
{
	for (int i = 0; i < 4; ++i)
		m_bag[i] = NULL;
}

void 	Character::m_setMateriaToBagSlot(const int index, AMateria *const *bag)
{
	if (index >= 0 && index < 4 && m_bag[index])
		m_deleteMateriaFromBag(index);
	m_bag[index] = bag[index]->clone();
}

void 	Character::m_deleteMateriaFromBag(const int index)
{
	delete	m_bag[index];
	m_bag[index] = NULL;
}

void 	Character::m_copyBag(AMateria *const *bag)
{
	for (int i = 0; i < 4; ++i)
	{
		if (m_bag[i])
			m_setMateriaToBagSlot(i, bag);
	}
}

Character::Character() : m_name("emptyName")
{
	m_setEmptyBag();
}

Character::Character(const string &name) : m_name(name)
{
	m_setEmptyBag();
}

Character::Character(const Character &copy)
{
	m_setEmptyBag();
	*this = copy;
}

Character::~Character()
{
	for (int i = 0; i < 4; ++i)
		if (m_bag[i])
			m_deleteMateriaFromBag(i);
}

Character	&Character::operator=(const Character &copy)
{
	if (this == &copy)
		return *this;
	m_name = copy.getName();
	m_copyBag(copy.m_bag);
	return *this;
}

string const	&Character::getName() const
{ return m_name; }

void Character::equip(AMateria *m)
{
	if (!m)
		return ;
	for (int i = 0; i < 4; ++i)
	{
		if (!m_bag[i])
		{
			m_bag[i] = m;
			return;
		}
	}
}

void		Character::unequip(int index)
{
	if (index >= 0 && index < 4 && m_bag[index])
		m_bag[index] = NULL;
}

void 		Character::use(int index, ICharacter &target)
{
	if (index >= 0 && index < 4 && m_bag[index])
		m_bag[index]->use(target);
}