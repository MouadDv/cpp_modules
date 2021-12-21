/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milmi <milmi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 16:03:42 by milmi             #+#    #+#             */
/*   Updated: 2021/12/21 16:25:59 by milmi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __HUMAN_A__
#define __HUMAN_A__

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
private:
	Weapon			&weapon;
	std::string		name;
public:
	HumanA(std::string _name, Weapon &weap);
	~HumanA();
	void	attack( void );
};

#endif