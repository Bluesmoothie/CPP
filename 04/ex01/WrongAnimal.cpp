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

}

WrongAnimal::WrongAnimal(const std::string type) : _type(type)
{

}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
	this->_type = other._type;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
	this->_type = other._type;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{

}

void	WrongAnimal::makeSound() const
{
	if (this->_type == "WrongDog")
		std::cout << "WrongWouaf" << std::endl;
	else if (this->_type == "WrongCat")
		std::cout << "WrongMiaou" << std::endl;
	else
		std::cout << "Wrong..." << std::endl;
}

const	std::string	WrongAnimal::getType() const
{
	return (this->_type);
}