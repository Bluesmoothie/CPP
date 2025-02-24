/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 15:51:51 by ygille            #+#    #+#             */
/*   Updated: 2025/02/24 11:39:45 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int	main(void)
{
	PhoneBook	book;

	std::cout << M_CLEAR;
	std::cout << M_WELCOME << std::endl;
	choose_op(&book);
	std::cout << M_GOODBYE << std::endl;
	return (0);
}

void	choose_op(PhoneBook *book)
{
	std::string	op;

	do{
		std::cout << M_CHOOSE_OP << std::endl;
		std::cout << M_PROMPT;
		std::cin >> op;
		if (op.compare("ADD") == 0)
			op_add(book);
		else if (op.compare("SEARCH") == 0)
			op_search(book);
	}
	while (op.compare("EXIT") != 0);
}

void	op_add(PhoneBook *book)
{
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	number;
	std::string	secret;

	std::cout << "Contact informations :" << std::endl;
	std::cout << "First Name :";
	std::cin >> first_name;
	std::cout << "Last Name :";
	std::cin >> last_name;
	std::cout << "Nickname :";
	std::cin >> nickname;
	std::cout << "Phone Number :";
	std::cin >> number;
	std::cout << "Darkest secret :";
	std::cin >> secret;
	if (first_name.size() == 0 || last_name.size() == 0 || nickname.size() == 0 || number.size() == 0 || secret.size() == 0)
	{
		std::cout << "Error : arguments can't be blank" << std::endl;
		return ;
	}
	book->add_contact(first_name, last_name, nickname, number, secret);
}

void	op_search(PhoneBook *book)
{
	std::string	input;
	int			index;

	book->print_summary();
	std::cout << "Choose contact index" << std::endl << "Index :";
	std::cin >> input;
	index = std::atoi(input.c_str());
	book->print_contact(index);
}
