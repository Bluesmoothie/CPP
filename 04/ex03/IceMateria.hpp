/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IceMateria.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 15:26:11 by ygille            #+#    #+#             */
/*   Updated: 2025/03/26 15:38:59 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

#include "AMateria.hpp"

class	Ice : public AMateria
{
public:

	Ice();
	Ice(const Ice& other);
	Ice& operator=(const Ice& other);
	~Ice();

	AMateria*	clone() const;
	void		use(ICharacter& target);

protected:

private:

};