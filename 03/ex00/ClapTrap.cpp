/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 12:20:52 by ygille            #+#    #+#             */
/*   Updated: 2025/03/19 21:00:01 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string name) : _name(name), _hit(10), _energy(10), _attack(0)
{
	std::cout << "Constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) : _name(other._name), _hit(other._hit), _energy(other._energy), _attack(other._attack)
{
	std::cout << "Copy constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	std::cout << "Assignement operator called" << std::endl;
	this->_name = other._name;
	this->_hit = other._hit;
	this->_energy = other._energy;
	this->_attack = other._attack;	
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->_energy > 0 && this->_hit > 0)
	{
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attack << " points of damage!" << std::endl;
		this->_energy--;
	}
	else
		std::cout << "Claptrap " << this->_name << " can't attack" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hit > 0)
	{
		std::cout << "ClapTrap " << this->_name << " take " << amount << " damage" <<  std::endl;
		this->_hit -= amount;
		if (this->_energy <= 0)
			std::cout << "ClapTrap " << this->_name << " is dead" <<  std::endl;
	}
	else
		std::cout << "ClapTrap " << this->_name << " already dead" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energy > 0 && this->_hit > 0)
	{
		std::cout << "ClapTrap " << this->_name << " get " << amount << " hit points" << std::endl;
		this->_hit += amount;
		this->_energy--;
	}
	else
		std::cout << "ClapTrap " << this->_name << " can't be repaired" << std::endl;
}


