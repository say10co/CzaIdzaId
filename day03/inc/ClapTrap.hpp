/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adriouic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 12:04:47 by adriouic          #+#    #+#             */
/*   Updated: 2022/06/09 12:44:15 by adriouic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP 

#include <iostream>

class ClapTrap
{
	private:
		std::string __name; 
		int			__hit_point;
		int			__energy_point;
		int			__attack_damage;

	public:
		ClapTrap();
		~ClapTrap();
		ClapTrap(const ClapTrap &C);
		ClapTrap(const std::string &_name);

		void	operator=(const ClapTrap &C);

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

};

#endif /* CLAPTRAP_HPP */
