#include "Fixed.hpp"

int Fixed::_fixed_decimal_point = 8;

Fixed::Fixed( void ): _fixed_decimal(0)
{}

Fixed::Fixed( const int &num )
{
	this->_fixed_decimal = (num << _fixed_decimal_point);
}

Fixed::Fixed( const float &decimal )
{
	this->_fixed_decimal = roundf(decimal * (1 << _fixed_decimal_point));
}

Fixed::Fixed( const Fixed &cpy )
{
	*this = cpy;
}

Fixed::~Fixed( void )
{}

int	Fixed::getRawBits( void ) const
{
	return (this->_fixed_decimal);
}

void	Fixed::setRawBits( const int raw )
{
	this->_fixed_decimal = raw;
}

int		Fixed::toInt( void ) const
{
	return ((int)(this->_fixed_decimal >> _fixed_decimal_point));
}

float	Fixed::toFloat( void ) const
{
	return (((float)(this->_fixed_decimal)) / (1 << _fixed_decimal_point));
}

Fixed	const &Fixed::min(const Fixed &lhs, const Fixed &rhs)
{
	if (lhs._fixed_decimal <= rhs._fixed_decimal)
		return (lhs);
	return ( rhs );
}

Fixed	const &Fixed::max(const Fixed &lhs, const Fixed &rhs)
{
	if (lhs._fixed_decimal >= rhs._fixed_decimal)
		return (lhs);
	return ( rhs );
}

// overload

std::ostream &operator<<( std::ostream &ost, const Fixed  &rhs )
{
	ost << rhs.toFloat();
	return ( ost );
}

Fixed	&Fixed::operator=( const Fixed  &rhs )
{
	this->_fixed_decimal = rhs.getRawBits();
	return ( *this );
}

Fixed	&Fixed::operator++( void )
{
	this->_fixed_decimal += 1;
	return ( *this );
}

Fixed	&Fixed::operator--( void )
{
	this->_fixed_decimal -= 1;
	return ( *this );
}

Fixed	Fixed::operator++( int )
{
	Fixed tmp = *this;
	++(*this);
	return ( tmp );
}

Fixed	Fixed::operator--( int )
{
	Fixed tmp = *this;
	--(*this);
	return ( tmp );
}

Fixed	Fixed::operator+( const Fixed &rhs ) const
{
	return ( Fixed( this->toFloat() + rhs.toFloat()) );
}

Fixed	Fixed::operator-( const Fixed &rhs ) const
{
	return ( Fixed( this->toFloat() - rhs.toFloat()) );
}

Fixed	Fixed::operator*( const Fixed &rhs ) const
{
	return ( Fixed( this->toFloat() * rhs.toFloat()) );
}

Fixed	Fixed::operator/( const Fixed &rhs ) const
{
	if (rhs.getRawBits() == 0)
	{
		std::cout << "Can't devide by zero" << std::endl;
		return Fixed();
	}
	return ( Fixed( this->toFloat() / rhs.toFloat()) );
}

bool	Fixed::operator>( const Fixed &rhs ) const
{
	return ( this->toFloat() > rhs.toFloat() );
}

bool	Fixed::operator<( const Fixed &rhs ) const
{
	return ( this->toFloat() < rhs.toFloat() );
}

bool	Fixed::operator>=( const Fixed &rhs ) const
{
	return ( this->toFloat() >= rhs.toFloat() );
}

bool	Fixed::operator<=( const Fixed &rhs ) const
{
	return ( this->toFloat() <= rhs.toFloat() );
}

bool	Fixed::operator==( const Fixed &rhs ) const
{
	return ( this->toFloat() == rhs.toFloat() );
}

bool	Fixed::operator!=( const Fixed &rhs ) const
{
	return ( this->toFloat() != rhs.toFloat() );
}
