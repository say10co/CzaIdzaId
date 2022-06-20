/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adriouic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 14:44:10 by adriouic          #+#    #+#             */
/*   Updated: 2022/06/20 12:38:47 by adriouic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ex00/inc/Animal.hpp"
#include "../ex00/inc/Cat.hpp"
#include "../ex00/inc/Dog.hpp"
#include "../inc/Brain.hpp"

#include <iostream>

int main(void)
{

	std::cout << "\n-----------* Construction *---------\n" << std::endl;

	const Animal *cat = new Cat();
	const Animal *dog = new Dog();
	
	const std::string	 food = std::string("food");
	const std::string	 fun = std::string("Fun");
	const std::string	 sleep = std::string("sleep");

	cat->think(food);
	cat->think(fun);
	dog->think(sleep);

	std::cout << "-------------------" << std::endl;

	cat->expose_ideas();
	dog->expose_ideas();

	std::cout << "\n----------* making DeepCopies *------------\n" << std::endl;

	Dog	 *new_dog  = new Dog();
	Dog	*copy_dog = new Dog(*new_dog);
	Animal	*new_cat = new Cat();

	*new_cat = *cat;

	new_cat->expose_ideas();
	copy_dog->expose_ideas();

	delete copy_dog;
	delete new_cat;
	delete new_dog; //proves deep copy

	std::cout << "\n----------*  Distruction of array *------------\n" << std::endl;

	int	nb_animals = 4;
	Animal	**array = new Animal*[nb_animals];

	array[0] = new Cat();
	array[1] = new Cat();
	array[2] = new Dog();
	array[3] = new Dog();


	for (int i = 0; i < nb_animals; i++)
		delete array[i];
	delete [] array;

	std::cout << "\n----------*  Distruction *------------\n" << std::endl;

	delete cat;
	delete dog;

	return (0);
}
