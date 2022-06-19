/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adriouic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 00:42:53 by adriouic          #+#    #+#             */
/*   Updated: 2022/05/24 00:48:53 by adriouic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

Zombie::Zombie( std::string name_)
{
	name = name_;
}

Zombie::~Zombie(void)
{
	std::cout << name << ": Destroyed" << std::endl;
}

void	Zombie::announce( void )
{
	std::cout << name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}
