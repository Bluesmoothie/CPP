/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 15:56:17 by ygille            #+#    #+#             */
/*   Updated: 2025/02/11 20:03:51 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact
{
private:

public:
	Contact();
	~Contact();
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	number;
	std::string	secret;
};

#endif