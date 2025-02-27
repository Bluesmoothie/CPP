/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 12:20:47 by ygille            #+#    #+#             */
/*   Updated: 2025/02/27 09:38:12 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

int	main()
{
    ClapTrap	Clappy("Clappy");
    FragTrap	Scavy("Scavy");
	DiamondTrap	Diamond("Diamond");

    Clappy.attack("someone");
    Clappy.takeDamage(5);
    Clappy.beRepaired(5);
    Clappy.takeDamage(10);

    Scavy.attack("someone");
    Scavy.takeDamage(5);
    Scavy.beRepaired(5);
    Scavy.takeDamage(10);
    Scavy.highFivesGuys();

	Diamond.attack("someone");
    Diamond.takeDamage(5);
    Diamond.beRepaired(5);
    Diamond.takeDamage(10);
    Diamond.whoAmI();
	
	return (0);
}
