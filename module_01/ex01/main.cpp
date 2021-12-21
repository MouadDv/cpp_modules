/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milmi <milmi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 10:48:14 by milmi             #+#    #+#             */
/*   Updated: 2021/12/21 10:55:57 by milmi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int		main( void )
{
	int	N = 2;
	Zombie	*zombieptr;
	Zombie	Jeff("Jeff");

	Jeff.announce();
	zombieptr = zombieHorde(N, "Hordemember");
	delete[] zombieptr;
}
