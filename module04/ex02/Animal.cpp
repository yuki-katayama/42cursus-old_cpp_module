#include "Animal.hpp"

Animal::Animal(void)
	: type("Animal")
{
	std::cout << "Animal[type: " << this->type << "] default constructor called" << std::endl;
}

Animal::Animal(std::string const &type)
	: type(type)
{
	std::cout << "Animal[type: " << this->type << "] arguments constructor called" << std::endl;
}

Animal::Animal(Animal const &cpy)
	: type(cpy.type)
{
	std::cout << "Animal[type: " << this->type << "] copy constructor called" << std::endl;
}

Animal &Animal::operator=(Animal const &rhs)
{
	type = rhs.type;
	std::cout << "Animal[type: " << this->type << "] overload called" << std::endl;
	return (*this);
}

Animal::~Animal(void)
{
	std::cout << "Animal[type: " << this->type << "] destructor called" << std::endl;
}

std::string const &Animal::getType(void) const
{
	return (this->type);
}

void Animal::makeSound(void) const
{
	std::cout << this->type << ": I'm Animal" << std::endl;
}

std::ostream &operator<<(std::ostream &output, Animal const &rhs)
{
	output << rhs.getType() << std::endl;
	return (output);
}
