#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	this->type = "WrongCat";
	std::cout << "WrongCat[type: " << this->type << "] default constructor called" << std::endl;
}

WrongCat::WrongCat(std::string const &type)
{
	this->type = type;
	std::cout << "WrongCat[type: " << this->type << "] arguments constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const &cpy)
{
	this->type = cpy.type;
	std::cout << "WrongCat[type: " << this->type << "] cpy constructor called" << std::endl;
}

WrongCat &WrongCat::operator=(WrongCat const &rhs)
{
	this->type = rhs.type;
	std::cout << "WrongCat[type: " << this->type << "] overload constructor called" << std::endl;
	return (*this);
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat[type: " << this->type << "] destructor called" << std::endl;
}

void WrongCat::makeSound(void) const
{
	std::cout << this->type << ": meow" << std::endl;
}

std::ostream &operator<<(std::ostream &output, WrongCat const &rhs)
{
	output << rhs.getType() << std::endl;
	return (output);
}
