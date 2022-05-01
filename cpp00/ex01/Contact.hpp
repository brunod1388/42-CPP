/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 00:16:15 by bgoncalv          #+#    #+#             */
/*   Updated: 2022/04/29 22:16:33 by brunodeoliv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>
#include <string>

using namespace std;

class Contact {

private:
	string			first_name;
	string			last_name;
	string			nickname;
	string			phone_number;
	string			darkest_secrets;

public:
	bool	set_first_name(string first_name);
	bool	set_last_name(string last_name);
	bool	set_nickname(string nickname);
	bool	set_phone_number(string phone_number);
	bool	set_darkest_secrets(string darkest_secrets);

	string	get_first_name(void);
	string	get_last_name(void);
	string	get_nickname(void);
	string	get_phone_number(void);
	string	get_darkest_secrets(void);
};

#endif
