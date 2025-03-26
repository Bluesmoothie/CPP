/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 14:51:23 by ygille            #+#    #+#             */
/*   Updated: 2025/03/26 15:11:57 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ICharacter.hpp"
#include "AMateria.hpp"

#define BAGSIZE	4

class	Character : public ICharacter
{
public:

	Character(const std::string name);
	Character(const Character& other);
	Character& operator=(const Character& other);
	~Character();

	const std::string&	getName() const;
	void				equip(AMateria* m);
	void				unequip(int idx);
	void				use(int idx, ICharacter& target);

protected:

private:

	std::string	_name;
	AMateria*	_bag[BAGSIZE];

};