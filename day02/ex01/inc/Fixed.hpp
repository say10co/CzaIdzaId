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
		void	operator=(const Fixed &P) ;
		//float 	operator<<(const Fixed &fp) const;
		~Fixed();
		
		int		getRawBits(void) const;
		void	setRawBits(int	 const raw);
		int		toInt(void) const;
		float 	toFloat(void) const;

};
std::ostream& operator<<(std::ostream &os, const Fixed &fp);


#endif //FIXED_HPP
