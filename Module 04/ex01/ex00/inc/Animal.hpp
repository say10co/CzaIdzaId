/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adriouic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 20:01:50 by adriouic          #+#    #+#             */
/*   Updated: 2022/06/22 20:07:16 by adriouic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP 

#include <iostream>

#include "../../inc/Brain.hpp"

class Animal
{
	protected:
		std::string __type;
	public:
		Animal();
		virtual ~Animal();
		Animal(const Animal &animal);
		Animal &operator=(const Animal &animal);
		
		virtual void	makeSound(void) const;
		const std::string &getType(void) const;

		virtual Brain *getBrain(void) const = 0 ;
};

#endif /* ANIMAL_HPP */
