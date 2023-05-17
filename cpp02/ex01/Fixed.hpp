#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <math.h>

class Fixed
{
	private:
		int					_fixed_point;
		static const int	_frac_bits;	
	public:
		Fixed();
		Fixed(Fixed const &fixed);
		~Fixed();
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		Fixed	&operator=(Fixed const &fixed);

		Fixed(const int fixed_point);
		Fixed(const float float_point);
		float toFloat( void ) const;
		int toInt( void ) const;
};
std::ostream	&operator<<(std::ostream &o, Fixed const &fixed);

#endif