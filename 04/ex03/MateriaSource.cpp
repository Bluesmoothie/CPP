/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 15:08:36 by ygille            #+#    #+#             */
/*   Updated: 2025/03/26 16:12:09 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0 ; i < MEMSIZE ; i++)
		this->_memory[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& other)
{
	for (int i = 0 ; i < MEMSIZE ; i++)
	{
		if (other._memory[i])
			this->_memory[i] = other._memory[i]->clone();
		else
			this->_memory[i] = NULL;
	}
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other)
{
	for (int i = 0 ; i < MEMSIZE ; i++)
	{
		if (this->_memory[i])
			delete this->_memory[i];
		if (other._memory[i])
			this->_memory[i] = other._memory[i]->clone();
		else
			this->_memory[i] = NULL;
	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
	for (int i = 0 ; i < MEMSIZE ; i++)
		if (this->_memory[i])
			delete this->_memory[i];
}

void		MateriaSource::learnMateria(AMateria* m)
{
	int	idx = 0;

	while (idx < MEMSIZE && this->_memory[idx] != NULL)
		idx++;
	if (idx < MEMSIZE)
		this->_memory[idx] = m;
}

AMateria*	MateriaSource::createMateria(const std::string& type)
{
	int i = 0;
	while (i < MEMSIZE)
	{
		if (this->_memory[i] && (type == this->_memory[i]->getType()))
			break ;
		i++;
	}
	if (i < MEMSIZE)
		return (this->_memory[i]->clone());
	return (0);
}
