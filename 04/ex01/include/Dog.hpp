/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 09:46:50 by ygille            #+#    #+#             */
/*   Updated: 2025/02/27 11:51:24 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#pragma once

#include <iostream>
#include <string>

#include "Animal.hpp"
#include "Brain.hpp"

class	Dog : public Animal
{
public:

	Dog();
	Dog(const Dog& other);
	Dog& operator=(const Dog& other);
	~Dog();

private:

	Brain*	brain;

};

#endif