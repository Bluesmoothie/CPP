/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 12:42:36 by ygille            #+#    #+#             */
/*   Updated: 2025/02/25 12:52:39 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main(void)
{
	std::string		string;
	std::string*	stringPTR;
	std::string&	stringREF = string;

	string = "HI THIS IS BRAIN";
	stringPTR = &string;
	std::cout << "Address of string:   " << static_cast<void*>(&string) << std::endl;
	std::cout << "Address of stringPTR:" << static_cast<void*>(&stringPTR) << std::endl;
	std::cout << "Address of stringREF:" << static_cast<void*>(&stringREF) << std::endl;
	std::cout << "Value of string:   " << string << std::endl;
	std::cout << "Value of stringPTR:" << stringPTR << std::endl;
	std::cout << "Value of stringREF:" << stringREF << std::endl;
	return (0);
}
