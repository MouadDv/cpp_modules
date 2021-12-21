/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milmi <milmi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 16:00:25 by milmi             #+#    #+#             */
/*   Updated: 2021/12/21 16:23:40 by milmi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string _type): type(_type)
{
}

Weapon::~Weapon()
{
}

const	std::string	&Weapon::getType( void )
{
	const std::string	&ret = this->type;
	return (ret);
}

void	Weapon::setType(std::string val)
{
	this->type = val;
}
