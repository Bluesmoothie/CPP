/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 19:28:04 by ygille            #+#    #+#             */
/*   Updated: 2025/02/25 13:34:22 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int	main(void)
{
	Zombie*		horde;
	int			hordeSize;
	std::string	name;

	hordeSize = 10;
	name = "jambondeparmes";
	horde = zombieHorde(hordeSize, name);
	for (int i = 0 ; i < hordeSize ; i++)
		horde[i].announce();
	delete[](horde);
	return(0);
}
