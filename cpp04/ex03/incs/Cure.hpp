#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria{

private:

protected:

public:

	Cure(void);
	Cure(const Cure &src);
	~Cure(void);

	Cure & operator=(const Cure &rhs);

	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);
};

#endif
