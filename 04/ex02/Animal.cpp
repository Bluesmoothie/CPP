/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 18:03:45 by ygille            #+#    #+#             */
/*   Updated: 2025/03/25 16:01:34 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Error")
{
	std::cout << "Animal constructor" << std::endl;
}

Animal::Animal(const std::string type) : _type(type)
{
	std::cout << "Animal constructor" << std::endl;
}

Animal::Animal(const Animal& other)
{
	std::cout << "Animal constructor" << std::endl;
	this->_type = other._type;
}

Animal& Animal::operator=(const Animal& other)
{
	this->_type = other._type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal destructor" << std::endl;
}

void	Animal::makeSound() const
{

}

const	std::string	Animal::getType() const
{
	return (this->_type);
}

void	Animal::think() const
{
	
}

void	Animal::addIdea(const std::string idea)
{
	(void) idea;
}