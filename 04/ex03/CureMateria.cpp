/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CureMateria.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 15:27:19 by ygille            #+#    #+#             */
/*   Updated: 2025/03/26 15:38:31 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CureMateria.hpp"

Cure::Cure() : AMateria("cure")
{

}

Cure::Cure(const Cure& other) : AMateria("cure")
{
	(void) other;
}

Cure& Cure::operator=(const Cure& other)
{
	this->_type = other._type;
	return (*this);
}

Cure::~Cure()
{

}

AMateria*	Cure::clone() const
{
	AMateria*	out = new Cure();
	return (out);
}

void		Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}