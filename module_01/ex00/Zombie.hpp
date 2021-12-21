/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milmi <milmi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 09:34:02 by milmi             #+#    #+#             */
/*   Updated: 2021/12/21 15:57:47 by milmi            ###   ########.fr       */
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
		Zombie();
		Zombie(std::string	_name);
		void	announce( void );
		~Zombie();
};

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

#endif