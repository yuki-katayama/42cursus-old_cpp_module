#include "Dog.hpp"

Dog::Dog(void)
{
	this->type = "Dog";
}

Dog::Dog(std::string const &type)
{
	this->type = type;
}

Dog::Dog(Dog const &cpy)
{
	this->type = cpy.type;
}

Dog &Dog::operator=(Dog const &rhs)
{
	this->type = rhs.type;
	return (*this);
}

Dog::~Dog(void)
{
}

void Dog::makeSound(void) const
{
	std::cout << this->type << ": woof" << std::endl;
}

std::ostream &operator<<(std::ostream &output, Dog const &rhs)
{
	output << rhs.getType() << std::endl;
	return (output);
}
