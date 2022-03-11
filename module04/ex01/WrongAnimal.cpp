#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
	: type("WrongAnimal")
{
	std::cout << "WrongAnimal[type: " << this->type << "] default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string const &type)
	: type(type)
{
	std::cout << "WrongAnimal[type: " << this->type << "] arguments constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &cpy)
	: type(cpy.type)
{
	std::cout << "WrongAnimal[type: " << this->type << "] copy constructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &rhs)
{
	this->type = rhs.type;
	std::cout << "WrongAnimal[type: " << this->type << "] overload called" << std::endl;
	return (*this);
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal[type: " << this->type << "] destructor called" << std::endl;
}

std::string const &WrongAnimal::getType(void) const
{
	return (this->type);
}

void WrongAnimal::makeSound(void) const
{
	std::cout << this->type << ": I'm WrongAnimal" << std::endl;
}

std::ostream &operator<<(std::ostream &output, WrongAnimal const &rhs)
{
	output << rhs.getType() << std::endl;
	return (output);
}
