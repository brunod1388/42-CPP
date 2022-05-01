/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 00:16:09 by bgoncalv          #+#    #+#             */
/*   Updated: 2022/04/29 22:11:07 by brunodeoliv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "Contact.hpp"
#define MAX_CONTACT 3

using namespace std;

class PhoneBook {

private:
	Contact book[MAX_CONTACT];
	int		i0;
	int		nb_contact;
public:
	PhoneBook(void);
	
	void	add_contact(void);
	void	search_contact(void);
	void	display_contacts(void);
	void	display_info(int id);
	void	start(void);
};

#endif
