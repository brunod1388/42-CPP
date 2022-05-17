#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include <string>

class MateriaSource {

private:

protected:

public:

	MateriaSource(void);
	MateriaSource(const MateriaSource &src);
	~MateriaSource(void);

	MateriaSource & operator=(const MateriaSource &rhs);

};

#endif
