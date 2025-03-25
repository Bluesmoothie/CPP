/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 18:03:45 by ygille            #+#    #+#             */
/*   Updated: 2025/03/20 18:43:47 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("Error")
{
	std::cout << "WrongAnimal constructor" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string type) : _type(type)
{
	std::cout << "WrongAnimal constructor" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
	std::cout << "WrongAnimal constructor" << std::endl;
	this->_type = other._type;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
	this->_type = other._type;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor" << std::endl;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "Wrong..." << std::endl;
}

const	std::string	WrongAnimal::getType() const
{
	return (this->_type);
}