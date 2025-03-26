/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 15:08:39 by ygille            #+#    #+#             */
/*   Updated: 2025/03/26 15:16:18 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

#define MEMSIZE	4

class	MateriaSource : public IMateriaSource
{
public:

	MateriaSource();
	MateriaSource(const MateriaSource& other);
	MateriaSource& operator=(const MateriaSource& other);
	~MateriaSource();

	void		learnMateria(AMateria* m);
	AMateria*	createMateria(const std::string& type);

protected:

private:

	AMateria*	_memory[MEMSIZE];

};