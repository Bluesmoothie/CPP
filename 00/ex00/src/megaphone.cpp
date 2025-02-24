/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 15:03:42 by ygille            #+#    #+#             */
/*   Updated: 2025/02/11 16:45:29 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	int		j;
	char	c;

	if (argc < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else for (int i = 1; i < argc; i++)
	{
		j = 0;
		while (argv[i][j])
		{
			c = toupper(argv[i][j]);
			std::cout << c;
			j++;
		}
	}
	return (0);
}
