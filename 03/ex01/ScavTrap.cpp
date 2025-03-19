/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 12:52:45 by ygille            #+#    #+#             */
/*   Updated: 2025/03/19 21:09:37 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name)
{
    std::cout << "ScavTrap constructor called" << std::endl;
	this->_hit = 100;
    this->_energy = 50;
    this->_attack = 20;
	this->_gateKeeperMode = false;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
    *this = other;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	std::cout << "ScavTrap assignment operator called" << std::endl;
	ClapTrap::operator=(other);
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

void	ScavTrap::guardGate()
{
	if (!this->_gateKeeperMode)
	{
		std::cout << "ScavTrap " << this->_name <<  " is now in gatekeeper mode" << std::endl;
		this->_gateKeeperMode = true;
	}
	else
		std::cout << "ScavTrap " << this->_name <<  " is already in gatekeeper mode" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->_energy > 0 && this->_hit > 0)
	{
		std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attack << " points of damage!" << std::endl;
		this->_energy--;
	}
	else
		std::cout << "Scavtrap " << this->_name << " can't attack" << std::endl;
}