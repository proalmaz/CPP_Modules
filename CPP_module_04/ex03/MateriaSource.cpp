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

MateriaSource