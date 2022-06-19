/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adriouic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 01:13:40 by adriouic          #+#    #+#             */
/*   Updated: 2022/05/24 01:35:42 by adriouic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

#define NB_ZOMBIES 42

Zombie* zombieHorde( int N, std::string name );

int main(void)
{
	Zombie	*zombie_lst;

	zombie_lst = zombieHorde(NB_ZOMBIES, "CrackHead");
	if (zombie_lst == nullptr)
		return (1);

	for (int i = 0; i < NB_ZOMBIES ; i++)
		zombie_lst[i].announce();

	delete [] zombie_lst;
	return (0);
}
