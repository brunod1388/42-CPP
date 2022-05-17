#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
	return ;
}

Cure::Cure(const Cure &src) : AMateria("cure")
{
	return ;
}

Cure::~Cure(void);
{
	return ;
}

Cure	&Cure::operator=(const Cure &rhs)
{
	this->_type = rhs._type;
	return ;
}

AMateria	*Cure::clone() const
{
	return new Cure(*this);
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals <name>'s wounds *" << std::endl;
}
