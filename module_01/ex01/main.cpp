/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milmi <milmi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 10:48:14 by milmi             #+#    #+#             */
/*   Updated: 2021/12/23 23:04:49 by milmi            ###   ########.fr       */
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
	if (!zombieptr)
		return (0);
	for (int i = 0; i < N; i++)
		zombieptr[i].announce();
	delete[] zombieptr;
}
