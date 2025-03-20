/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 18:03:54 by ygille            #+#    #+#             */
/*   Updated: 2025/03/20 18:33:23 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal("Dog")
{

}

Dog::Dog(const Dog& other)
{
	this->_type = other._type;
}

Dog& Dog::operator=(const Dog& other)
{
	this->_type = other._type;
	return (*this);
}

Dog::~Dog()
{

}