/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 15:56:42 by ygille            #+#    #+#             */
/*   Updated: 2025/02/12 18:32:38 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>

# include "Contact.hpp"

class PhoneBook
{
private:
	Contact	contacts[8];
	int		last_added;
public:
	PhoneBook();
	~PhoneBook();
	void add_contact(std::string first_name, std::string last_name, std::string nickname, std::string number, std::string secret);
	void print_contacts();
	void print_contact(int index);
};

#endif