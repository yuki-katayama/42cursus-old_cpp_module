#include "Fixed.hpp"
Fixed::Fixed( void ): _num(0)
{
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed( const int num )
: _num(num)
{
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed( Fixed const & src )
{
	std::cout << "Copy constructor called" << std::endl;
	this->_num = src.getRawBits();
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
	return (this->_num);
}

void	Fixed::setRawBits( const int raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_num = raw;
}

// overload
Fixed	&Fixed::operator=( Fixed const &rhs )
{
	std::cout << "Assignement operator called" << std::endl;
	this->_num = rhs.getRawBits();
	return *this;
}
