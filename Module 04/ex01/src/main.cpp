/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adriouic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 14:44:10 by adriouic          #+#    #+#             */
/*   Updated: 2022/06/19 14:48:44 by adriouic         ###   ########.fr       */
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
	const Animal *big_cat = new Cat();
	const Animal *dog = new Dog();

	const std::string	 food = std::string("food");
	const std::string	 fun = std::string("Fun");
	const std::string	 sleep = std::string("sleep");

	std::cout << "\n----------* making DeepCopies *------------\n" << std::endl;
	
	cat->think(food);
	cat->think(fun);

	dog->think(sleep);

	cat->expose_ideas();
	dog->expose_ideas();

	big_cat = cat;

	cat->expose_ideas();

	std::cout << "\n----------*  Distruction *------------\n" << std::endl;

	delete cat;
	delete dog;
	delete big_cat;
	return (0);
}
