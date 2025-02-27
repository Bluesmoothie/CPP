/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 11:40:40 by ygille            #+#    #+#             */
/*   Updated: 2025/02/27 11:54:09 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Default constructor called for Brain" << std::endl;
}

Brain::Brain(const Brain& other)
{
	std::cout << "Default copy constructor called for Brain" << std::endl;
	for (int i = 0 ; i < 100 ; i++)
		this->ideas[i] = other.ideas[i];
}

Brain& Brain::operator=(const Brain& other)
{
	std::cout << "Assignement operator called for Brain" << std::endl;
	for (int i = 0 ; i < 100 ; i++)
		this->ideas[i] = other.ideas[i];
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Default destructor called for Brain" << std::endl;
}