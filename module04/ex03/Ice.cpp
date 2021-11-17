#include "Ice.hpp"

Ice::Ice(void)
	: AMateria("ice")
{
}

Ice::Ice(std::string const &type)
	: AMateria(type)
{
}

Ice::Ice(Ice const &cpy)
{
	this->_type = cpy._type;
}

Ice &Ice::operator=(Ice const &rhs)
{
	_type = rhs._type;
	return (*this);
}

Ice::~Ice(void)
{
}

AMateria *Ice::clone(void) const
{
	Ice *cpy = new Ice(this->_type);
	return (cpy);
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

std::ostream &operator<<(std::ostream &output, Ice const &rhs)
{
	output << rhs.getType() << std::endl;
	return (output);
}
