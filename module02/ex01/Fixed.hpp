#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{

	public:
		Fixed( void );
		Fixed( const Fixed &src );
		Fixed( const int & );
		Fixed( const float & );
		~Fixed( void );

		Fixed	&operator=( const Fixed &other );
		Fixed 	&operator<<( const Fixed &rhs );

		int		getRawBits( void ) const;
		void	setRawBits( const int raw );

		int		toInt( void ) const;
		float	toFloat( void ) const;

	private:
		int	_fixed_decimal;
		static int	_fixed_decimal_point;
};

std::ostream &operator<<( std::ostream &ost, const Fixed  &rhs );

#endif
