/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milmi <milmi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 00:43:14 by milmi             #+#    #+#             */
/*   Updated: 2021/12/17 10:22:01 by milmi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int Phonebook::ind = 0;
int Phonebook::nbrofcontacts = 0;

void	Phonebook::ADD(void)
{
	if (this->nbrofcontacts == 8)
		std::cout << RED << "The memory is full and the contacts will be overwriten!" << RESET << std::endl;
	std::cout << "first name> ";
	std::string	fn;
	std::cin >> fn;
	Phonebook::contacts[this->ind].set_fname(fn);
	std::cout << "last name> ";
	std::string	ln;
	std::cin >> ln;
	Phonebook::contacts[this->ind].set_lname(ln);
	std::cout << "nickname> ";
	std::string	nn;
	std::cin >> nn;
	Phonebook::contacts[this->ind].set_nickname(nn);
	std::cout << "phone number> ";
	std::string	pn;
	std::cin >> pn;
	Phonebook::contacts[this->ind].set_pnumber(pn);
	std::cout << "darkest secret> ";
	std::string	ds;
	std::cin >> ds;
	Phonebook::contacts[this->ind].set_dsecret(ds);
	this->ind = (this->ind + 1) % 8;
	if (this->nbrofcontacts < 8)
		this->nbrofcontacts++;
}

void	Phonebook::SEARCH()
{
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	for (int i = 0; i < this->nbrofcontacts; i++)
	{
		std::cout << "|" << std::setw(10) << i;
		if (Phonebook::contacts[i].get_fname().size() > 10)
			std::cout << "|" << std::setw(10) << Phonebook::contacts[i].get_fname().substr(0, 9) + ".";
		else
			std::cout << "|" << std::setw(10) << Phonebook::contacts[i].get_fname();
		if (Phonebook::contacts[i].get_lname().size() > 10)
			std::cout << "|" << std::setw(10) << Phonebook::contacts[i].get_lname().substr(0, 9) + ".";
		else
			std::cout << "|" << std::setw(10) << Phonebook::contacts[i].get_lname();
		if (Phonebook::contacts[i].get_nickname().size() > 10)
			std::cout << "|" << std::setw(10) << Phonebook::contacts[i].get_nickname().substr(0, 9) + ".";
		else
			std::cout << "|" << std::setw(10) << Phonebook::contacts[i].get_nickname();
		std::cout << "|" << std::endl;
	}
	if (this->nbrofcontacts > 0)
	{
		std::cout << BLUE << "Enter an index between 0 and " << this->nbrofcontacts - 1 << "> " << RESET;
		int		index;
		std::cin >> index;
		if (index >= 0 && index <= this->nbrofcontacts - 1)
		{
			std::cout << "First Name: " << Phonebook::contacts[index].get_fname() << std::endl;
			std::cout << "Last Name: " << Phonebook::contacts[index].get_lname() << std::endl;
			std::cout << "Nick Name: " << Phonebook::contacts[index].get_nickname() << std::endl;
			std::cout << "Phone Number: " << Phonebook::contacts[index].get_pnumber() << std::endl;
			std::cout << "Darkest Secret: " << Phonebook::contacts[index].get_dsecret() << std::endl;
		}
		else
			std::cout << "Index out of range." << std::endl;
	}
}
