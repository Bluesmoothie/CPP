/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 09:46:48 by ygille            #+#    #+#             */
/*   Updated: 2025/03/20 13:35:07 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Default constructor called for Dog" << std::endl;
	this->_brain = new Brain();
}

Dog::Dog(const Dog& other) : Animal(other.type)
{
	std::cout << "Default copy constructor called for Dog" << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
	std::cout << "Default constructor called for Dog" << std::endl;
	this->type = other.type;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Default destructor called for Dog" << std::endl;
	delete this->_brain;
}

void	Dog::makeSound() const
{
	std::cout << "Wouaf" << std::endl;
}
