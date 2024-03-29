/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milmi <milmi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 11:06:35 by milmi             #+#    #+#             */
/*   Updated: 2021/12/23 23:09:48 by milmi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main( void )
{
	std::string	string = "HI THIS IS BRAIN";
	std::string	*stringPTR = &string;
	std::string	&stringREF = string;
	
	std::cout << "Address of string:                  " << &string << std::endl;
	std::cout << "Address contained in stringPTR:     " << stringPTR << std::endl;
	std::cout << "Address of stringREF:               " << &stringREF << std::endl;

	std::cout << "--------------------------------------------------------" << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;
}