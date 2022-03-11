#include "Cat.hpp"
#include "Animal.hpp"

Cat::Cat(void)
	: _brain(new Brain())
{
	this->type = "Cat";
	std::cout << "Cat[type: " << this->type << "] default constructor called" << std::endl;
}

Cat::Cat(std::string const &type)
	: _brain(new Brain())
{
	this->type = type;
	std::cout << "Cat[type: " << this->type << "] arguments constructor called" << std::endl;
}

Cat::Cat(Cat const &cpy)
{
	this->type = cpy.type;
	this->_brain = new Brain(*cpy._brain);
	std::cout << "Cat[type: " << this->type << "] cpy constructor called" << std::endl;
}

Cat &Cat::operator=(Cat const &rhs)
{
	this->type = rhs.type;
	this->_brain = new Brain(*rhs._brain);
	std::cout << "Cat[type: " << this->type << "] overload constructor called" << std::endl;
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << "Cat[type: " << this->type << "] destructor called" << std::endl;
	delete this->_brain;
}

void Cat::makeSound(void) const
{
	std::cout << this->type << ": meow" << std::endl;
}

Brain *Cat::getBrain(void) const
{
	return (this->_brain);
}

std::ostream &operator<<(std::ostream &output, Cat const &rhs)
{
	output << rhs.getType() << std::endl;
	return (output);
}
