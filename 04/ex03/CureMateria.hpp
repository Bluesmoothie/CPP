/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CureMateria.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 15:27:04 by ygille            #+#    #+#             */
/*   Updated: 2025/03/26 15:38:56 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

#include "AMateria.hpp"

class	Cure : public AMateria
{
public:

	Cure();
	Cure(const Cure& other);
	Cure& operator=(const Cure& other);
	~Cure();

	AMateria*	clone() const;
	void		use(ICharacter& target);

protected:

private:

};