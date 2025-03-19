/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 12:20:47 by ygille            #+#    #+#             */
/*   Updated: 2025/03/19 20:59:33 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap	Clappy("Clappy");

	Clappy.attack("someone");
	Clappy.takeDamage(5);
	Clappy.beRepaired(5);
	Clappy.beRepaired(5);
	Clappy.beRepaired(5);
	Clappy.beRepaired(5);
	Clappy.beRepaired(5);
	Clappy.beRepaired(5);
	Clappy.beRepaired(5);
	Clappy.beRepaired(5);
	Clappy.beRepaired(5);
	Clappy.beRepaired(5);
	Clappy.beRepaired(5);
	Clappy.takeDamage(100);
	Clappy.attack("someone");
	Clappy.takeDamage(10);
	return (0);
}
