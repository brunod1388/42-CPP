/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 00:14:23 by brunodeoliv       #+#    #+#             */
/*   Updated: 2022/05/16 23:54:41 by brunodeoliv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <AAnimal.hpp>
#include <Dog.hpp>
#include <Cat.hpp>

#define MAX_ANIMALS 6

int main(void)
{
	AAnimal		*zoo[MAX_ANIMALS];
	std::string		ideas[6];

	ideas[0] = "Wouaf";
	ideas[1] = "Wouaf Wouaf";
	ideas[2] = "EAAAAAAT";
	ideas[3] = "Baaaaaal";
	ideas[4] = "ZZZZZzzzzzzzzZZZZ";
	ideas[5] = "What's that smell?";

	for (size_t i = 0; i < 6; i++)
	{
		if (i % 2)
			zoo[i] = new Dog();
		else
			zoo[i] = new Cat();
		// zoo[i] = i % 2 ? new Dog() : new Cat();
	}
	for (size_t i = 0; i < 6; i++)
		zoo[i]->getBrain()->getIdeas()[0] = ideas[i];
	for (size_t i = 0; i < 6; i++)
		std::cout << zoo[i]->getType() << " thinks : " << zoo[i]->getBrain()->getIdeas()[0];
	for (size_t i = 0; i < 6; i++)
		delete zoo[i];
	while (42);
	return 0;
}