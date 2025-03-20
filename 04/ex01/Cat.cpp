/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 18:03:42 by ygille            #+#    #+#             */
/*   Updated: 2025/03/20 18:33:26 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{

}

Cat::Cat(const Cat& other)
{
	this->_type = other._type;
}

Cat& Cat::operator=(const Cat& other)
{
	this->_type = other._type;
	return (*this);
}

Cat::~Cat()
{

}