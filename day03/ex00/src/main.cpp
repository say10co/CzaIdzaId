/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adriouic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 11:43:45 by adriouic          #+#    #+#             */
/*   Updated: 2022/06/09 13:21:19 by adriouic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../inc/ClapTrap.hpp"

int main(void)
{
	ClapTrap	player1("Clap1");
	ClapTrap	player2("Clap2");

	player1.status();
	player2.status();

	player1.set_attack_damage(3);
	player2.set_attack_damage(5);

	player1.attack("Clap2");
	player2.takeDamage(player1.get_attack_damage());
	player2.status();

	player2.attack("Clap1");
	player1.takeDamage(player2.get_attack_damage());
	player1.status();

	player2.attack("Clap1");
	player1.takeDamage(player2.get_attack_damage());
	player1.status();

	player2.attack("Clap1");
	player1.takeDamage(player2.get_attack_damage());
	player1.status();
	return (0);
}

