/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milmi <milmi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 00:43:14 by milmi             #+#    #+#             */
/*   Updated: 2021/12/17 09:47:16 by milmi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int	main(void)
{
	Phonebook		phonebookins;
	std::string		str;

	while (1)
	{
		std::cout << YELLOW << "Phonebook >" << RESET;
		std::cin >> str;
		if (str == "ADD")
			phonebookins.ADD();
		else if (str == "SEARCH")
			phonebookins.SEARCH();
		else if (str == "EXIT" || std::cin.eof())
			return (0);
		else
			std::cout << "Invalid Command: " << str << std::endl << "USAGE: ADD, SEARCH, EXIT" << std::endl;
	}
}