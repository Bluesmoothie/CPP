/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 18:03:56 by ygille            #+#    #+#             */
/*   Updated: 2025/03/20 18:33:01 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class	Dog : public	Animal
{
public:

	Dog();
	Dog(const Dog& other);
	Dog& operator=(const Dog& other);
	~Dog();

protected:

private:

};