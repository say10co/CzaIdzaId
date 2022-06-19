/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adriouic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 23:49:20 by adriouic          #+#    #+#             */
/*   Updated: 2022/06/14 00:02:35 by adriouic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP 

#include "../../ClapTrap/inc/ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
	protected:
		static const unsigned int Default_hitpoints = 100;
		static const unsigned int Default_energypoints = 50;
		static const unsigned int Default_attackdamage = 20;
		
	public:
		ScavTrap();
		~ScavTrap();
		ScavTrap(const ScavTrap &clap);
		ScavTrap(const std::string &name);
		ScavTrap &operator=(const ScavTrap  &scav);

		void	attack(const std::string &target);
		void guardGate();
};


#endif /* SCAVTRAP_HPP */
