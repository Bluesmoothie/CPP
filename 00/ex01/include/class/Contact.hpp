/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 15:56:17 by ygille            #+#    #+#             */
/*   Updated: 2025/02/24 11:45:56 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>
# include <iostream>

class Contact
{
private:
	std::string	last_name;
	std::string	first_name;
	std::string	nickname;
	std::string	number;
	std::string	secret;
	bool		is_initvar;
	void		print_string(std::string str);

public:
	Contact();
	~Contact();
	void	edit(std::string fname, std::string lname, std::string nick, std::string num, std::string dsecret);
	bool	is_init();
	void	sum_print();
	void	print();
};

#endif