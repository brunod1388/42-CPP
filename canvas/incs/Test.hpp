#ifndef TEST_HPP
# define TEST_HPP

#include <string>

class Test {

private:

protected:

public:

	Test(void);
	Test(const Test &src);
	~Test(void);

	Test & operator=(const Test &rhs);

};

#endif
