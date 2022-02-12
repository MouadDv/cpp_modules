/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milmi <milmi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 06:28:36 by milmi             #+#    #+#             */
/*   Updated: 2022/02/09 12:42:21 by milmi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __KAREN__
#define __KAREN__

#include <string>
#include <iostream>

class Karen
{
private:
	void error( void );
	void debug( void );
	void info( void );
	void warning( void );
public:
	void complain( std::string level );
};

#endif