#include "Fixed.hpp"

int Fixed::_fixed_decimal_point = 8;

Fixed::Fixed( void ): _fixed_decimal(0)
{
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed( const int &num )
{
	std::cout << "Int constructor called" << std::endl;
	this->_fixed_decimal = (num << _fixed_decimal_point);
	return;
}

Fixed::Fixed( const float &decimal )
{
	std::cout << "Float constructor called" << std::endl;
	this->_fixed_decimal = roundf(decimal * (1 << _fixed_decimal_point));
}

Fixed::Fixed( const Fixed &src )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
}

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
	return ((float)(this->_fixed_decimal) / (1 << _fixed_decimal_point));
}

// overload
Fixed	&Fixed::operator=( const Fixed  &rhs )
{
	std::cout << "Assignation operator called" << std::endl;
	this->_fixed_decimal = rhs.getRawBits();
	return (*this);
}

std::ostream &operator<<( std::ostream &ost, const Fixed  &rhs )
{
	ost << rhs.toFloat();
	return (ost);
}
