/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 15:57:48 by ygille            #+#    #+#             */
/*   Updated: 2025/02/24 11:45:26 by ygille           ###   ########.fr       */
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
	this->contacts[this->last_added].edit(first_name, last_name, nickname, number, secret);
	std::cout << "Contact added at index " << this->last_added + 1 << std::endl;
}

void PhoneBook::print_summary()
{
	int	i;

	i = 0;
	std::cout << "     INDEX|FIRST NAME| LAST NAME|  NICKNAME" << std::endl;
	std::cout << "‾‾‾‾‾‾‾‾‾‾|‾‾‾‾‾‾‾‾‾‾|‾‾‾‾‾‾‾‾‾‾|‾‾‾‾‾‾‾‾‾‾" << std::endl;
	while (i < 8)
	{
		if (this->contacts[i].is_init())
		{
			std::cout << "         " << i + 1 << "|";
			this->contacts[i].sum_print();
			std::cout << std::endl;
		}
		i++;
	}
}

void PhoneBook::print_contact(int index)
{
	if (index < 1 || index > 8)
	{
		std::cout << "Error : invalid index" << std::endl;
		return ;
	}
	std::cout << "Contact " << index << ":" << std::endl;
	this->contacts[index - 1].print();
}
