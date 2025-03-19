/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 12:52:48 by ygille            #+#    #+#             */
/*   Updated: 2025/03/19 21:14:33 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#pragma once

#include <string>
#include <iostream>

#include "ClapTrap.hpp"

class	FragTrap : public ClapTrap
{
public:

	FragTrap(const std::string name);
	FragTrap(const FragTrap& other);
	FragTrap& operator=(const FragTrap& other);
	~FragTrap();

	void	highFivesGuys();

private:

};

#endif