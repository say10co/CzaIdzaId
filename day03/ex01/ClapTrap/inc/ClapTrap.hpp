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

typedef const unsigned int uint_ct;

class ClapTrap
{
	private:
		std::string 			__name; 
		unsigned int			__hit_point;
		unsigned int			__energy_point;
		unsigned int			__attack_damage;

	public:
		ClapTrap();
		~ClapTrap();
		ClapTrap(const ClapTrap &C);
		ClapTrap(const std::string &_name);
		ClapTrap(const std::string &name, uint_ct hp, uint_ct ep, uint_ct ad);

		void	operator=(const ClapTrap &C);

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		
		unsigned int	get_attack_damage(void) const;
		void	set_attack_damage(uint_ct damage);

		const std::string &get_name(void) const;
		void	set_name(const std::string &name);

		unsigned int get_hit_point(void) const;
		void	set_hit_point(uint_ct hitpoint);

		unsigned int get_energy_point(void) const;
		void	set_energy_point(uint_ct enegy_point);

		void	status(void);

};

#endif /* CLAPTRAP_HPP */
