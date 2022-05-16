/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 00:14:23 by brunodeoliv       #+#    #+#             */
/*   Updated: 2022/05/16 01:59:51 by brunodeoliv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Animal.hpp>
#include <Dog.hpp>
#include <Cat.hpp>
#include <WrongCat.hpp>
#include <WrongAnimal.hpp>


int main(void)
{
	const Animal* meta = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	
	std::cout << "Cat type :" << cat->getType() << " " << std::endl;
	std::cout << "Dog type :" << dog->getType() << " " << std::endl;
	std::cout << "Dog sound :" << std::endl;
	dog->makeSound(); //will output the cat sound!
	std::cout << "Cat sound :" << std::endl;
	cat->makeSound();
	std::cout << "Animal sound :" << std::endl;
	meta->makeSound();

	delete meta;
	delete dog;
	delete cat;

	const WrongAnimal* metaWrong = new WrongAnimal();
	const WrongAnimal* catWrong = new WrongCat();
	
	std::cout << catWrong->getType() << " " << std::endl;
	catWrong->makeSound(); //will output the wrong sound!
	metaWrong->makeSound();

	delete metaWrong;
	delete catWrong;
	return 0;
}