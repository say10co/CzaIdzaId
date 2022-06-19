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
		static const unsigned int Default_hitpoints = 10;
		static const unsigned int Default_energypoints = 10;
		static const unsigned int Default_attackdamage = 0;

	protected:
		std::string 			__name; 
		unsigned int			__hit_point;
		unsigned int			__energy_point;
		unsigned int			__attack_damage;


	public:
		ClapTrap();
		~ClapTrap();
		ClapTrap(const ClapTrap &C);
		ClapTrap(const std::string &_name);

		void	operator=(const ClapTrap &C);

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		
		unsigned int	get_attack_damage(void) const;
		void	set_attack_damage(unsigned int damage);

		const std::string &get_name(void) const;
		void	status(void);

};

#endif /* CLAPTRAP_HPP */
