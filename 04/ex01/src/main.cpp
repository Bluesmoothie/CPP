/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 09:43:48 by ygille            #+#    #+#             */
/*   Updated: 2025/02/27 11:59:23 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "poly.hpp"

int	main()
{
	Animal	*animals[10];

	for (int i = 0 ; i < 10 ; i++)
	{
		if (i < 5)
			animals[i] = new Animal("Dog");
		else
			animals[i] = new Animal("Cat");
	}
	for (int i = 0 ; i < 10 ; i++)
		delete(animals[i]);
	return (0);
}
