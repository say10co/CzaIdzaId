#ifndef FIXEDPOINT_HPP
# define FIXEDPOINT_HPP 


class FixedPoint
{
	private:
		int					__fixed_point;
		static const int	__nb_bits;


	public:
		FixedPoint();
		FixedPoint(FixedPoint &P);
		void	operator=(const FixedPoint	&P) ;
		~FixedPoint();
		
		int		getRawBits(void) const;
		void	setRawBits(int	 const raw);

};


#endif //FIXEDPOINT_HPP
