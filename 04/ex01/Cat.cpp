/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 18:03:42 by ygille            #+#    #+#             */
/*   Updated: 2025/03/25 16:21:04 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat constructor" << std::endl;
	this->_brain = new Brain();
}

Cat::Cat(const Cat& other)
{
	std::cout << "Cat constructor" << std::endl;
	this->_type = other._type;
	this->_brain = new Brain(*other._brain);
}

Cat& Cat::operator=(const Cat& other)
{
	this->_type = other._type;
	this->_brain = other._brain;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat destructor" << std::endl;
	delete this->_brain;
}

void	Cat::makeSound() const
{
	std::cout << "Miaou" << std::endl;
}

void	Cat::think() const
{
	this->_brain->think();
}

void	Cat::addIdea(const std::string idea)
{
	this->_brain->addIdea(idea);
}