/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adriouic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 13:03:59 by adriouic          #+#    #+#             */
/*   Updated: 2022/06/10 21:10:13 by adriouic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP 

#include <iostream>

class Fixed
{
	private:
		int					__fixed_point;
		static const int	__nb_bits;

	public:
		Fixed();
		Fixed(const Fixed &P);
		Fixed(const int	I);
		Fixed(const float	F);
		~Fixed();
		Fixed	&operator=(const Fixed &P) ;
		
		int		getRawBits(void) const;
		void	setRawBits(int	 const raw);
		int		toInt(void) const;
		float 	toFloat(void) const;

};

std::ostream& operator<<(std::ostream &os, const Fixed &fp);

#endif //FIXED_HPP
