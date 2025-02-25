/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 13:46:29 by ygille            #+#    #+#             */
/*   Updated: 2025/02/25 14:33:24 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string hname)
{
	this->name = hname;
	this->weapon_type = NULL;
}

HumanB::~HumanB()
{
}

void	HumanB::attack()
{
	if (this->weapon_type)
		std::cout << this->name << " attacks with their " << this->weapon_type->getType() << std::endl;
	else
		std::cout << this->name << " has no weapon" << std::endl;
}

void	HumanB::setWeapon(Weapon& weapon_type)
{
	this->weapon_type = &weapon_type;
}
