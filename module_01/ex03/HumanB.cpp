/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milmi <milmi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 16:18:57 by milmi             #+#    #+#             */
/*   Updated: 2021/12/21 16:21:54 by milmi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string _name): name(_name)
{
}

HumanB::~HumanB()
{
}

void	HumanB::attack( void )
{
	std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon weap)
{
	this->weapon = &weap;
}