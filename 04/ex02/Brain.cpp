/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 15:39:18 by ygille            #+#    #+#             */
/*   Updated: 2025/03/26 14:36:05 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor" << std::endl;
	for (int i = 0 ; i < BRAINSIZE ; i++)
		this->_ideas[i] = "";
	this->_ideaCount = 0;
}

Brain::Brain(const Brain& other)
{
	std::cout << "Brain constructor" << std::endl;
	this->_ideaCount = other._ideaCount;
	for (int i = 0 ; i < BRAINSIZE ; i++)
		this->_ideas[i] = other._ideas[i];
}

Brain& Brain::operator=(const Brain& other)
{
	this->_ideaCount = other._ideaCount;
	for (int i = 0 ; i < BRAINSIZE ; i++)
		this->_ideas[i] = other._ideas[i];
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain destructor" << std::endl;
}

void	Brain::think() const
{
	int random;

	if(this->_ideaCount == 0)
		return ;
	srand(static_cast<unsigned int>(time(0)));
	random = rand() % this->_ideaCount;
	std::cout << "Thinking about " << this->_ideas[random] << std::endl;
}

void	Brain::addIdea(const std::string idea)
{
	this->_ideas[this->_ideaCount] = idea;
	_ideaCount++;
	if (_ideaCount >= 100)
		_ideaCount = 0;
}