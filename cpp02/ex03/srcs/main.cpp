/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 23:24:16 by brunodeoliv       #+#    #+#             */
/*   Updated: 2022/05/05 03:11:32 by brunodeoliv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>

int main( void ) {

	Point a(0.58, 5.63);
	Point b(1.78, 1.25);
	Point c(6.04, 5.65);
	Point d(1.98, 7.33);
	Point e(3.3840, 2.9067);
	Point f(5.48, 1.87);
	Point g(2.68, 4.47);
	Point h(2, 2);

	std::cout << "Point a" << a << std::endl;
	std::cout << "Point b" << b << std::endl;
	std::cout << "Point c" << b << std::endl;

	std::cout << "Point d" << d << " should not be in triangle, bsp : " << bsp(a, b, c, d) << std::endl;
	std::cout << "Point e" << e << " should be in triangle, bsp : " << bsp(a, b, c, e) << std::endl;
	std::cout << "Point f" << f << " should not be in triangle, bsp : " << bsp(a, b, c, f) << std::endl;
	std::cout << "Point g" << g << " should be in triangle, bsp : " << bsp(a, b, c, g) << std::endl;
	std::cout << "Point h" << h << " should be in triangle, bsp : " << bsp(a, b, c, h) << std::endl;

	return 0;
}
