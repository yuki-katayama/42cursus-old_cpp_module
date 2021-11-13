#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{

	public:
		Fixed( void );
		Fixed( const Fixed &cpy );
		Fixed( const int &num );
		Fixed( const float &decimal );
		~Fixed( void );

		Fixed	&operator=( const Fixed &rhs );
		bool	operator>( const Fixed &rhs ) const;
		bool	operator<( const Fixed &rhs ) const;
		bool	operator>=( const Fixed &rhs ) const;
		bool	operator<=( const Fixed &rhs ) const;
		bool	operator==( const Fixed &rhs ) const;
		bool	operator!=( const Fixed &rhs ) const;
		Fixed	operator+( const Fixed &rhs ) const;
		Fixed	operator-( const Fixed &rhs ) const;
		Fixed	operator*( const Fixed &rhs ) const;
		Fixed	operator/( const Fixed &rhs ) const;
		Fixed	&operator++( void );
		Fixed	operator++( int );
		Fixed	&operator--( void );
		Fixed	operator--( int );

		int		getRawBits( void ) const;
		void	setRawBits( const int raw );

		int		toInt( void ) const;
		float	toFloat( void ) const;
		void	printError( std::string err ) const;

		static const Fixed	&min(const Fixed &lhs, const Fixed &rhs);
		static const Fixed	&max(const Fixed &lhs, const Fixed &rhs);

	private:
		int			_fixed_decimal;
		static int	_fixed_decimal_point;
};

std::ostream &operator<<( std::ostream &ost, const Fixed  &rhs );

#endif
