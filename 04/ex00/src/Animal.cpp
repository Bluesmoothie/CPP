/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 09:44:06 by ygille            #+#    #+#             */
/*   Updated: 2025/03/20 12:59:51 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("none")
{
	std::cout << "Default constructor called for Animal" << std::endl;
}

Animal::Animal(const std::string type) : type(type)
{
	std::cout << "Default constructor called for Animal" << std::endl;
}

Animal::Animal(const Animal& other) : type(other.type)
{
	std::cout << "Default copy constructor called for Animal" << std::endl;
}

Animal& Animal::operator=(const Animal& other)
{
	std::cout << "Assignement operator for Animal called" << std::endl;
	this->type = other.type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Default destructor called for Animal" << std::endl;
}

void	Animal::makeSound() const
{
	std::cout << "..." << std::endl;
}

std::string	Animal::getType() const
{
	return (this->type);
}
