#pragma once

#include "ICharacter.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

class Character : public ICharacter
{
private:
	string					m_name;
	AMateria				*m_bag[4];

	void 					m_setEmptyBag();
	void 					m_copyBag(AMateria *const bag[4]);
	void 					m_deleteMateriaFromBag(int const index);
	void 					m_setMateriaToBagSlot(int const index,
									   AMateria *const bag[]);

public:
	Character();
	Character(string const &name);
	Character(Character const &copy);
	virtual ~Character();

	Character				&operator=(Character const &copy);

	virtual string const	&getName() const;
	virtual void 			equip(AMateria *item);
	virtual void 			unequip(int index);
	virtual void 			use(int index, ICharacter &target);
};

