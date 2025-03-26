/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 15:08:33 by ygille            #+#    #+#             */
/*   Updated: 2025/03/26 15:16:22 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class	IMateriaSource
{
public:

	virtual				~IMateriaSource() {}	
	virtual void		learnMateria(AMateria* m) = 0;
	virtual	AMateria*	createMateria(const std::string& type) = 0;

protected:

private:

};