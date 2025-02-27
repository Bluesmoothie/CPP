/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 09:43:48 by ygille            #+#    #+#             */
/*   Updated: 2025/02/27 11:20:03 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "poly.hpp"

int	main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	const WrongAnimal* meta2 = new WrongAnimal();
	const WrongAnimal* l = new WrongCat();
	
	std::cout << l->getType() << " " << std::endl;
	l->makeSound(); //will output the cat sound!
	meta2->makeSound();

	delete(meta);
	delete(j);	
	delete(i);
	delete(l);
	delete(meta2);	
	return 0;
}
