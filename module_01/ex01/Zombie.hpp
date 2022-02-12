/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milmi <milmi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 09:34:02 by milmi             #+#    #+#             */
/*   Updated: 2021/12/23 22:44:56 by milmi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __ZOMBIE__
#define __ZOMBIE__

#include <iostream>
#include <string>

class Zombie
{
	private:
		std::string	name;
	public:
		Zombie( void );
		Zombie(std::string	_Name);
		void	announce( void );
		void	setName(std::string name);
		~Zombie();
};

Zombie* zombieHorde( int N, std::string name );

#endif