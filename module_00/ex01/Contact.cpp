/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milmi <milmi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 00:43:14 by milmi             #+#    #+#             */
/*   Updated: 2021/12/17 09:43:55 by milmi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

// Getters

std::string	Contact::get_fname(void)
{
	return (this->f_name);
}

std::string	Contact::get_lname(void)
{
	return (this->l_name);
}

std::string	Contact::get_nickname(void)
{
	return (this->nickname);
}

std::string	Contact::get_pnumber(void)
{
	return (this->pnumber);
}

std::string	Contact::get_dsecret(void)
{
	return (this->dsecret);
}

// Setters

void	Contact::set_fname(std::string fn)
{
	this->f_name = fn;
}

void	Contact::set_lname(std::string ln)
{
	this->l_name = ln;
}

void	Contact::set_nickname(std::string nn)
{
	this->nickname = nn;
}

void	Contact::set_pnumber(std::string pn)
{
	this->pnumber = pn;
}

void	Contact::set_dsecret(std::string ds)
{
	this->dsecret = ds;
}
