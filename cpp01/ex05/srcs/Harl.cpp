/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 01:09:19 by brunodeoliv       #+#    #+#             */
/*   Updated: 2022/05/02 01:31:07 by brunodeoliv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Harl.hpp>
#include <iostream>

using namespace std;

void	Harl::debug(void)
{
	cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << endl;
}

void	Harl::info(void)
{
	cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << endl;
}

void	Harl::warning(void)
{
	cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << endl;
}

void	Harl::error(void)
{
	cout << "This is unacceptable! I want to speak to the manager now." << endl;
}

void Harl::complain(string level)
{
	void (Harl::*complainsPTR[4])(void) = {&Harl::debug,
											&Harl::info,
											&Harl::warning,
											&Harl::error};
	string	levelarr[4] = {"debug", "info", "warning", "error"};

	for (size_t i = 0; i < 4; i++)
		if (level == levelarr[i])
			(this->*complainsPTR[i])();
}
