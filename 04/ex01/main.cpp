/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 18:03:58 by ygille            #+#    #+#             */
/*   Updated: 2025/03/25 16:17:28 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main()
{
	Animal*	animals[10];

	for (int i = 0 ; i < 5 ; i++)
		animals[i] = new Cat();
	for (int i = 5 ; i < 10 ; i++)
		animals[i] = new Dog();

	std::cout << animals[0]->getType() << std::endl;
	animals[0]->addIdea("How to control humans");
	animals[0]->think();

	Cat	catone;
	
	catone.addIdea("I'm a super vilain");
	catone.think();
	Cat catwo = catone;
	catwo.think();

	for (int i = 0 ; i < 10 ; i++)
		delete animals[i];
}