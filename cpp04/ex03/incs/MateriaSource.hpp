#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include <string>
#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource{

private:
	static const int	_nbMat = 4;
	AMateria			*_materia[_nbMat];
public:

	MateriaSource(void);
	MateriaSource(const MateriaSource &src);
	~MateriaSource(void);

	MateriaSource & operator=(const MateriaSource &rhs);
	virtual void learnMateria(AMateria *materia);
	virtual AMateria* createMateria(std::string const & type);
};

#endif
