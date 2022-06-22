/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adriouic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 20:01:50 by adriouic          #+#    #+#             */
/*   Updated: 2022/06/22 20:40:01 by adriouic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP 

#include <iostream>

#include "../../inc/Brain.hpp"

class AAnimal
{
	protected:
		std::string __type;
	public:
		AAnimal();
		virtual ~AAnimal();
		AAnimal(const AAnimal &animal);
		AAnimal &operator=(const AAnimal &animal);
		
		const std::string &getType(void) const;

		virtual void	makeSound(void) const = 0;
		virtual Brain *getBrain(void) const = 0 ;
};

#endif /* AANIMAL_HPP */
