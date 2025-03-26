/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 14:37:10 by ygille            #+#    #+#             */
/*   Updated: 2025/03/26 15:35:27 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

#include "ICharacter.hpp"

class	ICharacter;

class	AMateria
{
public:

	AMateria(const std::string& type);
	AMateria(const AMateria& other);
	AMateria& operator=(const AMateria& other);
	virtual ~AMateria();

	const std::string&	getType() const;

	virtual AMateria*	clone() const = 0;
	virtual void		use(ICharacter& target);

protected:

	std::string		_type;

private:

};