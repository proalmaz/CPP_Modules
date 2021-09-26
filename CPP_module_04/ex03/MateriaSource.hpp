#pragma once

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria	*m_bag[4];

	void 					m_setEmptyBag();
	void 					m_copyBag(AMateria *const bag[4]);
	void 					m_deleteMateriaFromBag(int const index);
	void 					m_setMateriaToBagSlot(int const index,
												   AMateria *const bag[]);

public:
	MateriaSource();
	MateriaSource(MateriaSource const &copy);
	virtual ~MateriaSource();

	MateriaSource	&operator=(MateriaSource const &copy);

	virtual void 		learnMateria(AMateria *m);
	virtual AMateria	*createMateria(string const &type);
};
