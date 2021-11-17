#include "Cat.hpp"
#include "Animal.hpp"

Cat::Cat(void)
{
	this->type = "Cat";
}

Cat::Cat(std::string const &type)
{
	this->type = type;
}

Cat::Cat(Cat const &cpy)
{
	this->type = cpy.type;
}

Cat &Cat::operator=(Cat const &rhs)
{
	this->type = rhs.type;
	return (*this);
}

Cat::~Cat(void)
{
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
