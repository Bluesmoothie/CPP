/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IceMateria.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 14:40:17 by ygille            #+#    #+#             */
/*   Updated: 2025/03/26 15:38:34 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IceMateria.hpp"

Ice::Ice() : AMateria("ice")
{

}

Ice::Ice(const Ice& other) : AMateria("ice")
{
	(void) other;
}

Ice& Ice::operator=(const Ice& other)
{
	this->_type = other._type;
	return (*this);
}

Ice::~Ice()
{

}

AMateria*	Ice::clone() const
{
	AMateria*	out = new Ice();
	return (out);
}

void		Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}