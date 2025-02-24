/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 15:57:41 by ygille            #+#    #+#             */
/*   Updated: 2025/02/24 11:46:52 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	this->is_initvar = false;
}

Contact::~Contact()
{
}

void	Contact::edit(std::string fname, std::string lname, std::string nick, std::string num, std::string dsecret)
{
	this->first_name = fname;
	this->last_name = lname;
	this->nickname = nick;
	this->number = num;
	this->secret = dsecret;
	this->is_initvar = true;
}

void	Contact::sum_print()
{
	if (this->is_initvar)
	{
		print_string(this->first_name);
		std::cout << "|";
		print_string(this->last_name);
		std::cout << "|";
		print_string(this->nickname);
	}
}

bool	Contact::is_init()
{
	return (this->is_initvar);
}

void	Contact::print_string(std::string str)
{
	std::string	tmp;
	int			i;
	int			j;

	i = str.length();
	j = 10 - i;
	while (j-- > 0)
		std::cout << " ";
	if (i > 10)
	{
		tmp = str.substr(0, 9);
		std::cout << tmp << ".";
	}
	else
		std::cout << str;
}

void	Contact::print()
{
	std::cout << "First Name : " << this->first_name << std::endl;
	std::cout << "Last Name : " << this->last_name << std::endl;
	std::cout << "Nickname : " << this->nickname << std::endl;
	std::cout << "Phone Number : " << this->number << std::endl;
	std::cout << "Darkest secret : " << this->secret << std::endl;
}
