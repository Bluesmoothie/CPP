/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 18:03:54 by ygille            #+#    #+#             */
/*   Updated: 2025/03/25 16:21:52 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal("Dog")
{
	std::cout << "Dog constructor" << std::endl;
	this->_brain = new Brain();
}

Dog::Dog(const Dog& other)
{
	std::cout << "Dog constructor" << std::endl;
	this->_type = other._type;
	this->_brain = new Brain(*other._brain);
}

Dog& Dog::operator=(const Dog& other)
{
	this->_type = other._type;
	this->_brain = other._brain;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog destructor" << std::endl;
	delete this->_brain;
}

void	Dog::makeSound() const
{
	std::cout << "Wouaf" << std::endl;
}

void	Dog::think() const
{
	this->_brain->think();
}

void	Dog::addIdea(const std::string idea)
{
	this->_brain->addIdea(idea);
}