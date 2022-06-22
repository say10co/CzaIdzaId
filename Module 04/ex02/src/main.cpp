/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adriouic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 14:44:10 by adriouic          #+#    #+#             */
/*   Updated: 2022/06/22 20:48:33 by adriouic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ex01/ex00/inc/AAnimal.hpp"
#include "../ex01/ex00/inc/Cat.hpp"
#include "../ex01/ex00/inc/Dog.hpp"
#include "../inc/Brain.hpp"

#include <iostream>

int main(void)
{
	//AAnimal test;
	
	std::cout << "\n-----------* Construction *---------\n" << std::endl;
	Dog	*dog = new Dog();
	Dog copy_dog(*dog);

	std::cout << "\n-----------* Distruction *---------\n" << std::endl;
	delete dog;
	copy_dog.makeSound();

	std::cout << "\n-----------* Construction *---------\n" << std::endl;
	Cat	*cat = new Cat();
	Cat copy_cat(*cat);

	std::cout << "\n-----------* Distruction *---------\n" << std::endl;
	delete cat;
	copy_cat.makeSound();


	return (0);
}
