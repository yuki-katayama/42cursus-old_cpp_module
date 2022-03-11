#include "Cat.hpp"
#include "Animal.hpp"

Cat::Cat(void)
{
	this->type = "Cat";
	std::cout << "Cat[type: " << this->type << "] default constructor called" << std::endl;
}

Cat::Cat(std::string const &type)
{
	this->type = type;
	std::cout << "Cat[type: " << this->type << "] arguments constructor called" << std::endl;

}

Cat::Cat(Cat const &cpy)
{
	this->type = cpy.type;
	std::cout << "Cat[type: " << this->type << "] cpy constructor called" << std::endl;
}

Cat &Cat::operator=(Cat const &rhs)
{
	this->type = rhs.type;
	std::cout << "Cat[type: " << this->type << "] overload constructor called" << std::endl;
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << "Cat[type: " << this->type << "] destructor called" << std::endl;
}

void Cat::makeSound(void) const
{
	std::cout << this->type << ": meow" << std::endl;
}

std::ostream &operator<<(std::ostream &output, Cat const &rhs)
{
	output << rhs.getType() << std::endl;
	return (output);
}
