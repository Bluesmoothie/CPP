/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 18:03:47 by ygille            #+#    #+#             */
/*   Updated: 2025/03/25 16:00:48 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class	Animal
{
public:

	Animal();
	Animal(const std::string type);
	Animal(const Animal& other);
	Animal& operator=(const Animal& other);
	virtual ~Animal();

	virtual void		makeSound() const;
	virtual void		think() const;
	virtual void		addIdea(const std::string idea);
	const	std::string	getType() const;

protected:

	std::string		_type;

private:

};