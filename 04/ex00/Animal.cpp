/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 18:03:45 by ygille            #+#    #+#             */
/*   Updated: 2025/03/20 18:34:29 by ygille           ###   ########.fr       */
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

void	makeSound() const
{
	
}