/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 11:40:40 by ygille            #+#    #+#             */
/*   Updated: 2025/03/20 13:45:22 by ygille           ###   ########.fr       */
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

void	Brain::newIdea(const std::string idea)
{
	int	i = 0;

	while (!this->ideas[i].size())
		i++;
	if (i < 100)
		this->ideas[i] = idea;
}

void	Brain::think(const int id) const
{
	if (id < 100 && id >= 0 && this->ideas[id].size())
		std::cout << this->ideas[id] << std::endl;
}