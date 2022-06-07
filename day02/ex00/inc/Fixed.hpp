/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adriouic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 12:01:38 by adriouic          #+#    #+#             */
/*   Updated: 2022/06/07 12:02:16 by adriouic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP 

class Fixed
{
	private:
		int					__fixed_point;
		static const int	__nb_bits;

	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed &P);
		void	operator=(const Fixed &P) ;
		
		int		getRawBits(void) const;
		void	setRawBits(int	 const raw);
};

#endif //FIXED_HPP
