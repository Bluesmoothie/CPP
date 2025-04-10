/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 18:03:42 by ygille            #+#    #+#             */
/*   Updated: 2025/03/20 18:44:01 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat constructor" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other)
{	
	std::cout << "WrongCat constructor" << std::endl;
	this->_type = other._type;
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
	this->_type = other._type;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor" << std::endl;
}