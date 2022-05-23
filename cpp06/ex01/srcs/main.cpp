/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 00:52:04 by brunodeoliv       #+#    #+#             */
/*   Updated: 2022/05/21 01:08:03 by brunodeoliv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

struct Data
{
	std::string	content;
};

uintptr_t	serialize(Data *ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data	*deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw);
}

int main(void)
{
	Data		d = {"hello World!"};
	Data		*ptr;
	uintptr_t	raw;

	raw = serialize(&d);
	ptr = deserialize(raw);

	std::cout << "Data Content : " << d.content << std::endl;
	std::cout << "raw ptr      : " << raw << std::endl;
	std::cout << "raw ptr (hex): 0x" << std::hex << raw << std::endl;
	std::cout << "ptr          : " << ptr << std::endl;
	std::cout << "ptr->content : " << ptr->content << std::endl;
	return 0;
}
