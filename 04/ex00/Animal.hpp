/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 18:03:47 by ygille            #+#    #+#             */
/*   Updated: 2025/03/20 18:34:15 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class	Animal
{
public:

	Animal();
	Animal(const std::string type);
	Animal(const Animal& other);
	Animal& operator=(const Animal& other);
	~Animal();

	void	makeSound() const;

protected:

	std::string		_type;

private:

};