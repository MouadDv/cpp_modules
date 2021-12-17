/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milmi <milmi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 00:43:14 by milmi             #+#    #+#             */
/*   Updated: 2021/12/17 07:42:13 by milmi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef	CONTACT_CLASS
#define CONTACT_CLASS

#include <string>

class Contact
{
	private:
		std::string	f_name;
		std::string	l_name;
		std::string	nickname;
		std::string	pnumber;
		std::string	dsecret;
	public:
		std::string	get_fname(void);
		std::string get_lname(void);
		std::string get_nickname(void);
		std::string get_pnumber(void);
		std::string get_dsecret(void);

		void		set_fname(std::string fn);
		void		set_lname(std::string ln);
		void		set_nickname(std::string nn);
		void		set_pnumber(std::string pn);
		void		set_dsecret(std::string ds);
};

#endif