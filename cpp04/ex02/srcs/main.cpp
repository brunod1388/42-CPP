/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 00:14:23 by brunodeoliv       #+#    #+#             */
/*   Updated: 2022/05/16 14:20:30 by brunodeoliv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Dog.hpp>
#include <Cat.hpp>

int main(void)
{
	const Dog* dog = new Dog();
	const Cat* cat = new Cat();


	delete dog;
	delete cat;
	while (42);
	return 0;
}