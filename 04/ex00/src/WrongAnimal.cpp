/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 11:15:44 by ygille            #+#    #+#             */
/*   Updated: 2025/02/27 11:21:02 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("none")
{
	std::cout << "Default constructor called for WrongAnimal" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : type(type)
{
	std::cout << "Default constructor called for WrongAnimal" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) : type(other.type)
{
	std::cout << "Default copy constructor called for WrongAnimal" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
	std::cout << "Assignement operator for WrongAnimal called" << std::endl;
	this->type = other.type;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Default destructor called for WrongAnimal" << std::endl;
}

void	WrongAnimal::makeSound() const
{
	if (!this->type.compare("WrongCat"))
		std::cout << "WrongMiaou" << std::endl;
	else if (!this->type.compare("WrongDog"))
		std::cout << "WrongWouaf" << std::endl;
	else
		std::cout << "Wrong..." << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return (this->type);
}
