/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 15:39:20 by ygille            #+#    #+#             */
/*   Updated: 2025/03/25 15:56:17 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <cstdlib>
#include <ctime>
#include <iostream>

#define BRAINSIZE	100

class	Brain
{
public:

	Brain();
	Brain(const Brain& other);
	Brain& operator=(const Brain& other);
	~Brain();

	void	think() const;
	void	addIdea(const std::string idea);

protected:

private:

	std::string	_ideas[BRAINSIZE];
	int			_ideaCount;

};