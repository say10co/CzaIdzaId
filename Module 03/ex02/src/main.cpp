/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adriouic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 23:57:33 by adriouic          #+#    #+#             */
/*   Updated: 2022/06/13 23:57:35 by adriouic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../inc/FragTrap.hpp"

int main()
{
	FragTrap s;
	FragTrap s0("Frag0");
	FragTrap s1("Frag1");
	FragTrap s2(s1);

	s.status();
	s0.status();
	s1.status();
	s2.status();

	s0.highFivesGuys();
	s1.highFivesGuys();
	
	s1.attack("Frag0");
	s0.takeDamage(s1.get_attack_damage());
	
	s0.status();
	s1.status();
	
	s0.beRepaired(10);
	s0.status();


}
