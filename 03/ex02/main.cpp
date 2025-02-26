/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 12:20:47 by ygille            #+#    #+#             */
/*   Updated: 2025/02/26 13:06:19 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int	main()
{
    ClapTrap	Clappy("Clappy");
    FragTrap	Scavy("Scavy");

    Clappy.attack("someone");
    Clappy.takeDamage(5);
    Clappy.beRepaired(5);
    Clappy.takeDamage(10);

    Scavy.attack("someone");
    Scavy.takeDamage(5);
    Scavy.beRepaired(5);
    Scavy.takeDamage(10);
    Scavy.highFivesGuys();
	
	return (0);
}
