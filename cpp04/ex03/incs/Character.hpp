#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <string>
#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter{

private:

	static const int	_nbSlot = 4;
	std::string			_name;
	AMateria			*_slot[Character::_nbSlot];

	Character(void);

public:

	Character(const std::string &name);
	Character(const Character &src);
	~Character(void);

	Character & operator=(const Character &rhs);

	virtual std::string const	&getName() const;

	virtual void				equip(AMateria* m);
	virtual void				unequip(int idx);
	virtual void				use(int idx, ICharacter& target);
};

#endif
