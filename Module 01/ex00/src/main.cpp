/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adriouic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 00:46:12 by adriouic          #+#    #+#             */
/*   Updated: 2022/05/24 01:11:28 by adriouic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

Zombie* newZombie( std::string name );
void	randomChump( std::string name );

int main(void)
{
	// Create a zombie instance
	Zombie	zombie ("PARENT-ZOMBIE");
	zombie.announce();

	// Zombie pointer
	Zombie	*zombie_pointer;
	zombie_pointer = newZombie("New Zombie");
	if (zombie_pointer != nullptr)
		zombie_pointer->announce();
	delete zombie_pointer;

	randomChump("Static zombie");
	return (0);
}
