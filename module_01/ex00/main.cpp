/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milmi <milmi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 09:43:44 by milmi             #+#    #+#             */
/*   Updated: 2021/12/21 09:49:34 by milmi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main( void )
{
	Zombie	*heap;

	heap = newZombie("[Heap allocated class]");
	heap->announce();
	randomChump("[Stack allocated class]");
	delete heap;
}
