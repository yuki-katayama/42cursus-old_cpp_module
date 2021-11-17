#include "Dog.hpp"

Dog::Dog(void)
:	_brain(new Brain())
{
	this->type = "Dog";
	std::cout << "Dog[type: " << this->type << "] default constructor called" << std::endl;
}

Dog::Dog(std::string const & type)
:	_brain(new Brain())
{
	this->type = type;
	std::cout << "Dog[type: " << this->type << "] arguments constructor called" << std::endl;
}

Dog::Dog(Dog const &cpy)
{
	this->type = cpy.type;
	this->_brain = new Brain(*cpy._brain);
	std::cout << "Dog[type: " << this->type << "] cpy constructor called" << std::endl;
}

Dog &Dog::operator=(Dog const &rhs)
{
	this->type = rhs.type;
	this->_brain = rhs._brain;
	std::cout << "Dog[type: " << this->type << "] overload called" << std::endl;
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << "Dog[type: " << this->type << "] destructor called" << std::endl;
	delete this->_brain;
}

void	Dog::makeSound(void) const
{
	std::cout << this->type << ": woof" << std::endl;
}

Brain	*Dog::getBrain(void) const
{
	return (this->_brain);
}

std::ostream	&operator<<(std::ostream &output, Dog const &rhs)
{
	output << rhs.getType() << std::endl;
	return (output);
}
