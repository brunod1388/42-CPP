/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 00:14:23 by brunodeoliv       #+#    #+#             */
/*   Updated: 2022/05/16 02:07:27 by brunodeoliv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Animal.hpp>
#include <Dog.hpp>
#include <Cat.hpp>

int main(void)
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;
	delete i;
	while (42);
	return 0;
}