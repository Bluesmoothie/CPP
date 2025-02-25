/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 13:47:23 by ygille            #+#    #+#             */
/*   Updated: 2025/02/25 14:32:51 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANA__
# define __HUMANA__

# include <string>
# include <iostream>

# include "Weapon.hpp"

class	HumanA
{
private:

	std::string	name;
	Weapon&		weapon_type;

public:

	HumanA(std::string hname, Weapon& newWeapon);
	~HumanA();

	void	attack();
};

#endif