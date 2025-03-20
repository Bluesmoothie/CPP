/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 18:03:49 by ygille            #+#    #+#             */
/*   Updated: 2025/03/20 18:32:58 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class	Cat : public	Animal
{
public:

	Cat();
	Cat(const Cat& other);
	Cat& operator=(const Cat& other);
	~Cat();

protected:

private:

};