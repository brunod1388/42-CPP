/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 00:16:15 by bgoncalv          #+#    #+#             */
/*   Updated: 2022/05/02 22:07:15 by brunodeoliv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>
#include <string>

class Contact {

private:
	std::string			first_name;
	std::string			last_name;
	std::string			nickname;
	std::string			phone_number;
	std::string			darkest_secrets;

public:
	bool	set_first_name(std::string first_name);
	bool	set_last_name(std::string last_name);
	bool	set_nickname(std::string nickname);
	bool	set_phone_number(std::string phone_number);
	bool	set_darkest_secrets(std::string darkest_secrets);

	std::string	get_first_name(void);
	std::string	get_last_name(void);
	std::string	get_nickname(void);
	std::string	get_phone_number(void);
	std::string	get_darkest_secrets(void);
};

#endif
