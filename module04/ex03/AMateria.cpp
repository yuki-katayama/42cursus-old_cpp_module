#include "AMateria.hpp"

AMateria::AMateria(void)
	: _type("materia")
{
}

AMateria::AMateria(std::string const &type)
	: _type(type)
{
}

AMateria::AMateria(AMateria const &cpy)
{
	this->_type = cpy._type;
}

AMateria &AMateria::operator=(AMateria const &rhs)
{
	this->_type = rhs._type;
	return (*this);
}

AMateria::~AMateria(void)
{
}

std::string const &AMateria::getType(void) const
{
	return (this->_type);
}

void AMateria::use(ICharacter &target)
{
	std::cout << "materia: \"* " << target.getName() << " *\"";
}
