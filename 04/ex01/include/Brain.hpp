/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 11:40:37 by ygille            #+#    #+#             */
/*   Updated: 2025/02/27 11:52:22 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#pragma once

#include <string>
#include <iostream>

class	Brain
{
public:

	Brain();
	Brain(const Brain& other);
	Brain& operator=(const Brain& other);
	~Brain();

private:

	std::string	ideas[100];

};

#endif