/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milmi <milmi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 09:56:54 by milmi             #+#    #+#             */
/*   Updated: 2021/12/21 10:49:40 by milmi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie	*ret = new	Zombie[N];
	if (!ret)
		return (NULL);
	for (int i = 0; i < N; i++)
	{
		ret[i].setName(name);
		ret[i].announce();
	}
	return (ret);
}
