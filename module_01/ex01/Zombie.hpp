/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milmi <milmi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 09:34:02 by milmi             #+#    #+#             */
/*   Updated: 2021/12/21 10:47:26 by milmi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
