/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 18:03:54 by ygille            #+#    #+#             */
/*   Updated: 2025/03/25 15:37:05 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal("Dog")
{
	std::cout << "Dog constructor" << std::endl;
}

Dog::Dog(const Dog& other)
{
	std::cout << "Dog constructor" << std::endl;
	this->_type = other._type;
}

Dog& Dog::operator=(const Dog& other)
{
	this->_type = other._type;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog destructor" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "Wouaf" << std::endl;
}