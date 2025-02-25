/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 13:46:09 by ygille            #+#    #+#             */
/*   Updated: 2025/02/25 14:30:00 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string name)
{
	this->type = name;
}

Weapon::Weapon()
{
	this->type = "None";
}

Weapon::~Weapon()
{
}

const std::string&	Weapon::getType()
{
	return (this->type);
}

void				Weapon::setType(std::string newType)
{
	this->type = newType;
}
