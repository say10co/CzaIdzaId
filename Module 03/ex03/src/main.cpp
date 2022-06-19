/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adriouic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 00:03:31 by adriouic          #+#    #+#             */
/*   Updated: 2022/06/14 00:03:31 by adriouic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../inc/DiamondTrap.hpp"


int main(void)
{
	DiamondTrap D1("Nerve");
				std::cout << std::endl;
	DiamondTrap D2;
				std::cout << std::endl;
	DiamondTrap D3(D1);
				std::cout << std::endl;

	D2 = D1;
	
	D1.whoAmI();
	D2.whoAmI();
	D3.whoAmI();


	D1.attack(D2.get_name());
	D1.attack(D2.get_name());

	D1.status();
				std::cout << std::endl;
	D2.status();
				std::cout << std::endl;
	D2.beRepaired(D2.get_attack_damage());
	D1.status();
				std::cout << std::endl;
	D2.status();
				std::cout << std::endl;
	
	return (0);
}
