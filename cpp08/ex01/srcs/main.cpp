/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 03:34:37 by brunodeoliv       #+#    #+#             */
/*   Updated: 2022/05/22 04:33:43 by brunodeoliv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main ()
{
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp << std::endl;
	std::cout << "shortest span for " << sp.getSize() << " elements : " << sp.shortestSpan() << std::endl;
	std::cout << "longest span for " << sp.getSize() << " elements : " << sp.longestSpan() << std::endl << std::endl;

	try
	{
		sp.addNumber(9);
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error catched : " << e.what() << '\n';
	}
	
	Span	spRand(5);
	spRand.randomFill(100);
	std::cout << spRand << std::endl;
	std::cout << "shortest span for " << spRand.getSize() << " elements : " << spRand.shortestSpan() << std::endl;
	std::cout << "longest span for " << spRand.getSize() << " elements : " << spRand.longestSpan() << std::endl << std::endl;

	spRand = Span(5);
	spRand.randomFill(1000);
	std::cout << spRand << std::endl;
	std::cout << "shortest span for " << spRand.getSize() << " elements : " << spRand.shortestSpan() << std::endl;
	std::cout << "longest span for " << spRand.getSize() << " elements : " << spRand.longestSpan() << std::endl << std::endl;

	spRand = Span(1000);
	spRand.randomFill();
	std::cout << "shortest span for " << spRand.getSize() << " elements : " << spRand.shortestSpan() << std::endl;
	std::cout << "longest span for " << spRand.getSize() << " elements : " << spRand.longestSpan() << std::endl << std::endl;
	
	spRand = Span(12345);
	spRand.randomFill();
	std::cout << "shortest span for " << spRand.getSize() << " elements : " << spRand.shortestSpan() << std::endl;
	std::cout << "longest span for " << spRand.getSize() << " elements : " << spRand.longestSpan() << std::endl << std::endl;

	spRand = Span(123456);
	spRand.randomFill();
	std::cout << "shortest span for " << spRand.getSize() << " elements : " << spRand.shortestSpan() << std::endl;
	std::cout << "longest span for " << spRand.getSize() << " elements : " << spRand.longestSpan() << std::endl << std::endl;


	spRand = Span(1234567);
	spRand.randomFill();
	std::cout << "shortest span for " << spRand.getSize() << " elements : " << spRand.shortestSpan() << std::endl;
	std::cout << "longest span for " << spRand.getSize() << " elements : " << spRand.longestSpan() << std::endl << std::endl;

	return 0;
}