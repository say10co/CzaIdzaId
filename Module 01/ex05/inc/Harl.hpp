/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adriouic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 02:04:24 by adriouic          #+#    #+#             */
/*   Updated: 2022/05/24 02:04:25 by adriouic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP 
#include <iostream>

class Harl;
typedef void (Harl::*f_complain) (void);

class Harl
{
	private:
		f_complain	_methodes[4];
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );

	public:
		Harl();
		~Harl(void);
		void complain( std::string level );

};
#endif /* HARL_HPP */
