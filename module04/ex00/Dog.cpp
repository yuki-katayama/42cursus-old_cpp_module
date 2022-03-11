#include "Dog.hpp"

Dog::Dog(void)
{
	this->type = "Dog";
	std::cout << "Dog[type: " << this->type << "] default constructor called" << std::endl;
}

Dog::Dog(std::string const &type)
{
	this->type = type;
	std::cout << "Dog[type: " << this->type << "] arguments constructor called" << std::endl;
}

Dog::Dog(Dog const &cpy)
{
	this->type = cpy.type;
	std::cout << "Dog[type: " << this->type << "] cpy constructor called" << std::endl;
}

Dog &Dog::operator=(Dog const &rhs)
{
	this->type = rhs.type;
	std::cout << "Dog[type: " << this->type << "] overload called" << std::endl;
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << "Dog[type: " << this->type << "] destructor called" << std::endl;
	std::cout << "dog destructor called" << std::endl;
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
