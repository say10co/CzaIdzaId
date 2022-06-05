/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adriouic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 21:55:38 by adriouic          #+#    #+#             */
/*   Updated: 2022/06/05 22:27:39 by adriouic         ###   ########.fr       */
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
		~Fixed();
		Fixed(const Fixed &P);
		Fixed(const int	I);
		Fixed(const float	F);

		void	operator=(const Fixed &P) ;
		bool	operator>(const  Fixed &fp) const;
		bool	operator>=(const Fixed &fp) const;
		bool	operator<(const Fixed &fp) const;
		bool	operator<=(const Fixed &fp) const;
		bool	operator==(const Fixed &fp) const;
		bool	operator!=(const Fixed &fp) const;

		Fixed	operator+(const Fixed &fp) const;
		Fixed	operator-(const Fixed &fp) const;
		Fixed	operator*(const Fixed &fp) const;
		Fixed	operator/(const Fixed &fp) const;

		Fixed	&operator++(void);
		Fixed	operator++(int);
		Fixed	operator--(int);
		Fixed	&operator--(void);
		
		static 			Fixed 	&min(Fixed &fp1, Fixed &fp2);
		static 	Fixed 	&max(Fixed &fp1, Fixed &fp2);

		static 	const	Fixed 	&min(const Fixed &fp1, const Fixed &fp2);
		static	const 	Fixed 	&max(const Fixed &fp1, const Fixed &fp2);



		int		getRawBits(void) const;
		void	setRawBits(int	 const raw);

		int		toInt(void) const;
		float 	toFloat(void) const;

};

std::ostream& operator<<(std::ostream &os, const Fixed &fp);

#endif //FIXED_HPP
