/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 09:46:43 by ygille            #+#    #+#             */
/*   Updated: 2025/03/20 13:00:06 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Default constructor called for Cat" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other.type)
{
	std::cout << "Default copy constructor called for Cat" << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
	std::cout << "Assignement operator called for Cat" << std::endl;
	this->type = other.type;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Default destructor called for Cat" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "Miaou" << std::endl;
}
