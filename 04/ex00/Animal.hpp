/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 09:44:03 by ygille            #+#    #+#             */
/*   Updated: 2025/02/27 09:57:02 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#pragma once

#include <iostream>
#include <string>

class	Animal
{
public:

	Animal();
	Animal(std::string type);
	Animal(const Animal& other);
	Animal& operator=(const Animal& other);
	~Animal();

	void	makeSound();

protected:

	std::string	type;

private:

};

#endif