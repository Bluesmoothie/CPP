/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 15:57:48 by ygille            #+#    #+#             */
/*   Updated: 2025/02/20 18:07:42 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->last_added = -1;
}

PhoneBook::~PhoneBook()
{
}

void PhoneBook::add_contact(std::string first_name, std::string last_name, std::string nickname, std::string number, std::string secret)
{
	this->last_added++;
	if (this->last_added == 8)
		this->last_added = 0;
	this->contacts[this->last_added].first_name = first_name;
	this->contacts[this->last_added].last_name = last_name;
	this->contacts[this->last_added].nickname = nickname;
	this->contacts[this->last_added].number = number;
	this->contacts[this->last_added].secret = secret;
	std::cout << this->contacts[this->last_added].secret;
	std::cout << this->last_added;
}

void PhoneBook::print_contacts()
{
}

void PhoneBook::print_contact(int index)
{
	if (index < 1 || index > 8)
	{
		std::cout << "Error : invalid index" << std::endl;
		return ;
	}
	index--;
	std::cout << "Contact " << index + 1 << ":" << std::endl;
	std::cout << "First Name : " << this->contacts[index].first_name << std::endl;
	std::cout << "Last Name : " << this->contacts[index].last_name << std::endl;
	std::cout << "Nickname : " << this->contacts[index].nickname << std::endl;
	std::cout << "Phone Number : " << this->contacts[index].number << std::endl;
	std::cout << "Darkest secret : " << this->contacts[index].secret << std::endl;
}
