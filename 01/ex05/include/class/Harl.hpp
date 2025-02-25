/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 16:05:54 by ygille            #+#    #+#             */
/*   Updated: 2025/02/25 16:32:44 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_CLASS
# define HARL_CLASS

# include <string>
# include <iostream>

class	Harl
{
private:

	void 		(Harl::*funcPtrs[4])( void );
	std::string levels[4];

	void	debug();
	void	info();
	void	warning();
	void	error();

public:

	Harl();
	~Harl();

	void	complain(std::string level);
	
};

#endif