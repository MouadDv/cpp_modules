/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milmi <milmi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 06:28:38 by milmi             #+#    #+#             */
/*   Updated: 2021/12/23 23:33:19 by milmi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

void Karen::debug( void )
{
	std::cout << "[ DEBUG ]\n" << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void Karen::info( void )
{
	std::cout << "[ INFO ]\n" << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void Karen::warning( void )
{
	std::cout << "[ WARNING ]\n" << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void Karen::error( void )
{
	std::cout << "[ ERROR ]\n" << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void Karen::complain( std::string level )
{
	std::string tab[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void	(Karen::*ptr[4])(void);
	int			pos = 0;
	
	ptr[0] = &Karen::debug;
	ptr[1] = &Karen::info;
	ptr[2] = &Karen::warning;
	ptr[3] = &Karen::error;
	
	while (pos < 4)
	{
		if (level == tab[pos])
			break ;
		pos++;
	}
	
	switch (pos)
	{
		case 0:
			(this->*(ptr[0]))();
		case 1:
			(this->*(ptr[1]))();
		case 2:
			(this->*(ptr[2]))();
		case 3:
			(this->*(ptr[3]))();
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]\n";
			break;
	}
}