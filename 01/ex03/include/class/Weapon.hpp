/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 13:46:01 by ygille            #+#    #+#             */
/*   Updated: 2025/02/25 14:12:49 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WEAPON__
# define __WEAPON__

# include <string>

class	Weapon
{
private:

	std::string	type;

public:

	Weapon(std::string name);
	Weapon();
	~Weapon();

	const std::string&	getType();
	void				setType(std::string newType);
};

#endif