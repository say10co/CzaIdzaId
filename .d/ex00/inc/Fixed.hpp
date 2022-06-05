#ifndef FIXED_HPP
# define FIXED_HPP 


class Fixed
{
	private:
		int					__fixed_point;
		static const int	__nb_bits;


	public:
		Fixed();
		Fixed(const Fixed &P);
		void	operator=(const Fixed &P) ;
		~Fixed();
		
		int		getRawBits(void) const;
		void	setRawBits(int	 const raw);

};


#endif //FIXED_HPP
