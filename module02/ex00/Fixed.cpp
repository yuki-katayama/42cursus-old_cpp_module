#include "Fixed.hpp"
Fixed::Fixed( void ): _fixed_decimal(0)
{
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed( const int &num )
: _fixed_decimal(num)
{
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed( Fixed const & src )
{
	std::cout << "Copy constructor called" << std::endl;
	this->_fixed_decimal = src.getRawBits();
	return;
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
	return;
}

int	Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixed_decimal);
}

void	Fixed::setRawBits( const int raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_fixed_decimal = raw;
}

// overload
Fixed	&Fixed::operator=( const Fixed &rhs )
{
	std::cout << "Assignation operator called" << std::endl;
	this->_fixed_decimal = rhs.getRawBits();
	return *this;
}
