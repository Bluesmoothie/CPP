/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 09:46:46 by ygille            #+#    #+#             */
/*   Updated: 2025/02/27 09:55:45 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#pragma once

#include <iostream>
#include <string>

#include "Animal.hpp"

class	Cat : public Animal
{
public:

	Cat();
	Cat(const Cat& other);
	Cat& operator=(const Cat& other);
	~Cat();

private:

};

#endif