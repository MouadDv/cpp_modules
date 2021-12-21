/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milmi <milmi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 15:56:00 by milmi             #+#    #+#             */
/*   Updated: 2021/12/21 16:23:19 by milmi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __WEAPON__
#define __WEAPON__

#include <string>

class Weapon
{
private:
	std::string	type;
public:
	Weapon(std::string _type);
	~Weapon();
	const	std::string	&getType( void );
	void	setType(std::string val);
};

#endif