/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 14:51:28 by ygille            #+#    #+#             */
/*   Updated: 2025/03/26 15:33:30 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

#include "AMateria.hpp"

class	AMateria;

class	ICharacter
{
public:

	virtual 					~ICharacter(){}
	virtual const std::string&	getName() const = 0;
	virtual void				equip(AMateria* m) = 0;
	virtual void				unequip(int idx) = 0;
	virtual void				use(int idx, ICharacter& target) = 0;

protected:

private:

};