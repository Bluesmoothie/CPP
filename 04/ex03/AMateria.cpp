/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 14:37:08 by ygille            #+#    #+#             */
/*   Updated: 2025/03/26 16:08:09 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : _type(type)
{

}

AMateria::AMateria(const AMateria& other)
{
	(void) other;
}

AMateria& AMateria::operator=(const AMateria& other)
{
	(void) other;
	return (*this);
}

AMateria::~AMateria()
{

}

const std::string&	AMateria::getType() const
{
	return (this->_type);
}

void				AMateria::use(ICharacter& target)
{
	(void) target;
}