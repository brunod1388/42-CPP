/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 01:20:36 by brunodeoliv       #+#    #+#             */
/*   Updated: 2022/05/21 03:01:02 by brunodeoliv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"
#include <iostream>

Base *generate(void)
{
	switch (rand() % 3)
	{
	case 0:
		std::cout << " Class created  A" << std::endl;
		return new A();
	case 1:
		std::cout << " Class created  B" << std::endl;
		return new B();
	default:
		std::cout << " Class created  C" << std::endl;
		return new C();
	}
}

void identify(Base& p)
{
	try
	{
		A	&a = dynamic_cast<A &>(p);
		(void) a;
		std::cout << "I am an A class" << std::endl;
		return ;
	}
	catch(const std::exception& e) { (void) e; }

	try
	{
		B	&b = dynamic_cast<B &>(p);
		(void) b;
		std::cout << "I am a  B class" << std::endl;
		return ;
	}
	catch(const std::exception& e) { (void) e; }

	try
	{
		C	&c = dynamic_cast<C &>(p);
		(void) c;
		std::cout << "I am a  C class" << std::endl;
		return ;
	}
	catch(const std::exception& e) { (void) e; }
	std::cout << "Something is wrong" << std::endl;
}

void identify(Base* p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "I am an A class" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "I am a  B class" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "I am a  C class" << std::endl;
	else
		std::cout << "Something is wrong" << std::endl;
}

int main(void)
{
	Base *base;

	for (size_t i = 0; i < 10; i++)
	{
		base = generate();
		std::cout << "by ptr: "; identify(base);
		std::cout << "by ref: "; identify(*base);
		std::cout << std::endl << std::endl;
		delete base;
	}
	return 0;
}
