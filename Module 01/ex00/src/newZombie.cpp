/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adriouic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 00:44:16 by adriouic          #+#    #+#             */
/*   Updated: 2022/05/24 01:05:15 by adriouic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

Zombie *newZombie( std::string	name )
{
	Zombie	*__zombie;

	__zombie = new (std::nothrow) Zombie (name);
	return (__zombie);
}
