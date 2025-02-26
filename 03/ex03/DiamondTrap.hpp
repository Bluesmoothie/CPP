/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 13:53:55 by ygille            #+#    #+#             */
/*   Updated: 2025/02/26 15:33:52 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#pragma once

#include <string>
#include <iostream>

#include "FragTrap.hpp"
#include "ScavTrap.cpp"

class	DiamondTrap : public FragTrap, public ScavTrap
{
public:

	DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap& other);
	DiamondTrap& operator=(const DiamondTrap& other);
	~DiamondTrap();

	void	attack(const std::string& target);
	void	whoAmI();

private:

	std::string	_name;

};

#endif