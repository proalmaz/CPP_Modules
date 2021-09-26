#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	m_setEmptyBag();
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
	m_setEmptyBag();
	*this = copy;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; ++i)
	{
		if (m_bag[i])
			m_deleteMateriaFromBag(i);
	}
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &copy)
{
	if (this == &copy)
		return *this;
	m_copyBag(copy.m_bag);
	return *this;
}

void 	MateriaSource::m_setEmptyBag()
{
	for (int i = 0; i < 4; ++i)
		m_bag[i] = NULL;
}

void 	MateriaSource::m_setMateriaToBagSlot(const int index, AMateria *const *bag)
{
	if (index >= 0 && index < 4 && m_bag[index])
		m_deleteMateriaFromBag(index);
	m_bag[index] = bag[index]->clone();
}

void 	MateriaSource::m_deleteMateriaFromBag(const int index)
{
	delete	m_bag[index];
	m_bag[index] = NULL;
}

void 	MateriaSource::m_copyBag(AMateria *const *bag)
{
	for (int i = 0; i < 4; ++i)
	{
		if (m_bag[i])
			m_setMateriaToBagSlot(i, bag);
	}
}

void 	MateriaSource::learnMateria(AMateria *m)
{
	if (!m)
		return;
	for (int i = 0; i < 4; ++i)
	{
		if (!m_bag[i])
		{
			m_bag[i] = m;
			return;
		}
	}
}

AMateria	*MateriaSource::createMateria(const string &type)
{
	for (int i = 0; i < 4; ++i)
	{
		if (m_bag[i] && m_bag[i]->getType() == type)
			return (m_bag[i]->clone());
	}
	return (NULL);
}