/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 18:03:58 by ygille            #+#    #+#             */
/*   Updated: 2025/03/20 18:46:43 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

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

	delete j;
	delete i;
	delete meta;

	Animal	a("Cat");
	Animal	b("Dog");
	Animal	c("Horse");
	Animal	d = a;

	a.makeSound();
	b.makeSound();
	c.makeSound();
	d.makeSound();

	WrongAnimal	e("WrongCat");
	WrongAnimal	f("WrongDog");
	WrongAnimal	g("WrongHorse");
	WrongAnimal	h = e;

	e.makeSound();
	f.makeSound();
	g.makeSound();
	h.makeSound();
	return (0);
}