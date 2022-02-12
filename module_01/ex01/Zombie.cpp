/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milmi <milmi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 09:34:14 by milmi             #+#    #+#             */
/*   Updated: 2021/12/23 22:45:16 by milmi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void )
{
}

Zombie::Zombie(std::string	_name)
{
	this->name = _name;
}

void	Zombie::setName(std::string _Name)
{
	this->name = _Name;
}

void	Zombie::announce( void )
{
	std::cout << this->name << "  BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << this->name << "  destructed successfully!" << std::endl;
}
