/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 12:21:36 by ygille            #+#    #+#             */
/*   Updated: 2025/02/25 12:30:21 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

Zombie*	zombieHorde(int n, std::string name)
{
	Zombie*	horde;

	horde = new Zombie[n];
	for (int i = 0; i < n ; i++)
		horde[i].rename(name);
	return (horde);
}
