/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 19:28:04 by ygille            #+#    #+#             */
/*   Updated: 2025/02/25 12:16:37 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int	main(void)
{
	Zombie*	someZ;

	someZ = newZombie("someZ");
	someZ->announce();
	randomChump("random");
	delete(someZ);
	return(0);
}
