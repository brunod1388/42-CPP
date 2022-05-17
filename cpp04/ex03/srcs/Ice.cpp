#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
	return ;
}

Ice::Ice(const Ice &src) : AMateria("ice")
{
	return ;
}

Ice::~Ice(void)
{
	return ;
}

Ice & Ice::operator=(const Ice &rhs)
{
	this->_type = rhs._type;
	return ;
}

AMateria::AMateria* clone() const
{
	return new Ice(*this);
}

void	AMateria::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at <name> *" << std::endl;
}
