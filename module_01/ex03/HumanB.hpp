/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milmi <milmi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 16:17:15 by milmi             #+#    #+#             */
/*   Updated: 2021/12/21 16:21:43 by milmi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once
#ifndef __HUMAN_B__
#define __HUMAN_B__

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
private:
	Weapon			*weapon;
	std::string		name;
public:
	HumanB(std::string _name);
	~HumanB();
	void	attack( void );
	void	setWeapon(Weapon weap);
};

#endif