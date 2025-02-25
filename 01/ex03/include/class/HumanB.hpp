/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 13:46:52 by ygille            #+#    #+#             */
/*   Updated: 2025/02/25 14:32:56 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANB__
# define __HUMANB__

# include <string>
# include <iostream>

# include "Weapon.hpp"

class	HumanB
{
private:

	std::string	name;
	Weapon*		weapon_type;

public:

	HumanB(std::string hname);
	~HumanB();

	void	attack();
	void	setWeapon(Weapon& weapon_type);
};

#endif