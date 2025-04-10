/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 18:03:42 by ygille            #+#    #+#             */
/*   Updated: 2025/03/25 15:36:43 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat constructor" << std::endl;
}

Cat::Cat(const Cat& other)
{
	std::cout << "Cat constructor" << std::endl;
	this->_type = other._type;
}

Cat& Cat::operator=(const Cat& other)
{
	this->_type = other._type;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat destructor" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "Miaou" << std::endl;
}