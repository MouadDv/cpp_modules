/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milmi <milmi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 16:03:34 by milmi             #+#    #+#             */
/*   Updated: 2021/12/21 16:26:22 by milmi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string _name, Weapon &weap): weapon(weap), name(_name)
{
}

HumanA::~HumanA()
{
}

void	HumanA::attack( void )
{
	std::cout << this->name << " attacks with his " << this->weapon.getType() << std::endl;
}