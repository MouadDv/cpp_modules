/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milmi <milmi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 00:43:14 by milmi             #+#    #+#             */
/*   Updated: 2021/12/17 10:20:12 by milmi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef	PHONEBOOK_CLASS
#define PHONEBOOK_CLASS
#include "Contact.hpp"
#include <iostream>
#include <iomanip>

#define RESET   "\033[0m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define RED     "\033[31m"

class Phonebook
{
	private:
		Contact		contacts[8];
		static	int	ind;
		static	int	nbrofcontacts;
	public:
		void	ADD();
		void	SEARCH();
};

#endif