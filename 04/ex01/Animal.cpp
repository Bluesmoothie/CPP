/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 18:03:45 by ygille            #+#    #+#             */
/*   Updated: 2025/03/20 18:41:48 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Error")
{

}

Animal::Animal(const std::string type) : _type(type)
{

}

Animal::Animal(const Animal& other)
{
	this->_type = other._type;
}

Animal& Animal::operator=(const Animal& other)
{
	this->_type = other._type;
	return (*this);
}

Animal::~Animal()
{

}

void	Animal::makeSound() const
{
	if (this->_type == "Dog")
		std::cout << "Wouaf" << std::endl;
	else if (this->_type == "Cat")
		std::cout << "Miaou" << std::endl;
	else
		std::cout << "..." << std::endl;
}

const	std::string	Animal::getType() const
{
	return (this->_type);
}