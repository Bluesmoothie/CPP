/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 16:06:48 by ygille            #+#    #+#             */
/*   Updated: 2025/02/25 16:46:07 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	this->funcPtrs[0] = &Harl::debug;
	this->funcPtrs[1] = &Harl::info;
	this->funcPtrs[2] = &Harl::warning;
	this->funcPtrs[3] = &Harl::error;
	this->levels[0] = "debug";	
	this->levels[1] = "info";
	this->levels[2] = "warning";
	this->levels[3] = "error";
}

Harl::~Harl()
{
}

void	Harl::debug()
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl << std::endl;
}

void	Harl::info()
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl << std::endl;
}

void	Harl::warning()
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl << std::endl;
}

void	Harl::error()
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl << std::endl;
}

void	Harl::complain(std::string level)
{
	int i = 0;
    while (i < 4 && levels[i] != level)
        i++;
    
    if (i < 4)
	{
		while (i < 4)
		{
        	(this->*funcPtrs[i])();
			i++;
		}
	}
    else
        std::cout << "Harl doesn't know how to complain about " << level << std::endl;
}
