#include "Animal.hpp"

Animal::Animal(void)
	: type("Animal")
{
}

Animal::Animal(std::string const &type)
	: type(type)
{
}

Animal::Animal(Animal const &cpy)
	: type(cpy.type)
{
}

Animal &Animal::operator=(Animal const &rhs)
{
	this->type = rhs.type;
	return (*this);
}

Animal::~Animal(void)
{
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
