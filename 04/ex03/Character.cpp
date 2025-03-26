/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 14:51:21 by ygille            #+#    #+#             */
/*   Updated: 2025/03/26 16:12:25 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(const std::string name) : _name(name)
{
	for (int i = 0 ; i < BAGSIZE ; i++)
		this->_bag[i] = NULL;
}

Character::Character(const Character& other)
{
	this->_name = other._name;
	for (int i = 0 ; i < BAGSIZE ; i++)
	{
		if (other._bag[i])
			this->_bag[i] = other._bag[i]->clone();
		else
			this->_bag[i] = NULL;
	}
}

Character& Character::operator=(const Character& other)
{
	this->_name = other._name;
	for (int i = 0 ; i < BAGSIZE ; i++)
	{
		if (this->_bag[i])
			delete this->_bag[i];
		if (other._bag[i])
			this->_bag[i] = other._bag[i]->clone();
		else
			this->_bag[i] = NULL;
	}
	return (*this);
}

Character::~Character()
{
	for (int i = 0 ; i < BAGSIZE ; i++)
		if (this->_bag[i])
			delete this->_bag[i];
}

const std::string&	Character::getName() const
{
	return (this->_name);
}

void				Character::equip(AMateria* m)
{
	int	idx = 0;

	while (idx < BAGSIZE && this->_bag[idx] != NULL)
		idx++;
	if (idx < BAGSIZE)
		this->_bag[idx] = m;
}

void				Character::unequip(int idx)
{
	if (idx < BAGSIZE)
		this->_bag[idx] = NULL;
}

void				Character::use(int idx, ICharacter& target)
{
	if (this->_bag[idx])
		this->_bag[idx]->use(target);
}
