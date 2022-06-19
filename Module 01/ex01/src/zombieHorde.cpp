/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adriouic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 01:13:23 by adriouic          #+#    #+#             */
/*   Updated: 2022/05/24 01:21:16 by adriouic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie	*zombies;
	zombies = new (std::nothrow) Zombie[N];

	for (int i = 0; (zombies != nullptr && i < N); i++)
		zombies[i].set_name(name);
	return (zombies);
}
