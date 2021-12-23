/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milmi <milmi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 06:28:38 by milmi             #+#    #+#             */
/*   Updated: 2021/12/23 18:59:37 by milmi            ###   ########.fr       */
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
	std::string comp[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	size_t	pos = 0;
	int		found = 0;
	std::map<std::string,void (Karen::*) (void)> mymap;
  	std::map<std::string,void (Karen::*) (void)>::iterator it;
	  
	mymap["DEBUG"] = &Karen::debug;
	mymap["INFO"] = &Karen::info;
	mymap["WARNING"] = &Karen::warning;
	mymap["ERROR"] = &Karen::error;
	
	while (pos < 4)
	{
		if (comp[pos] == level || found == 1)
		{
			found = 1;
			it = mymap.find(comp[pos]);
			if (it != mymap.end())
				(this->*(it->second))();
		}
		pos++;
	}
	if (!found)
		std::cout << "[ Probably complaining about insignificant problems ]\n";
}