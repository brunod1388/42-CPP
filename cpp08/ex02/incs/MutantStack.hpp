#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <string>
#include <stack>

template<typename T>
class MutantStack : public std::stack<T>{

public:

	MutantStack<T>(void) {}
	MutantStack<T>(const MutantStack &src) : std::stack<T>(src) {}
	~MutantStack<T>(void) {}

	MutantStack<T> & operator=(const MutantStack &rhs);

	typedef typename std::stack<T>::container_type::iterator iterator;

	iterator	begin() { return this->c.begin(); }
	iterator	end() { return this->c.end(); }
};

#endif
