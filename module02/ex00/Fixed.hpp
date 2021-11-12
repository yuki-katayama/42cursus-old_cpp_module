#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{

	public:
		Fixed( void );
		Fixed( const Fixed &src );
		Fixed( const int num );
		~Fixed( void );

		Fixed	&operator=( const Fixed &other );

		int		getRawBits( void ) const;
		void	setRawBits( const int raw );

	private:
		int		_num;
	};

#endif
