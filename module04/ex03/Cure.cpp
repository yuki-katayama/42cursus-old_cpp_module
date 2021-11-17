#include "Cure.hpp"

Cure::Cure(void)
	: AMateria("cure")
{
}

Cure::Cure(std::string const &type)
	: AMateria(type)
{
}

Cure::Cure(Cure const &cpy)
{
	this->_type = cpy._type;
}

Cure &Cure::operator=(Cure const &rhs)
{
	_type = rhs._type;
	return (*this);
}

Cure::~Cure(void)
{
}

AMateria *Cure::clone(void) const
{
	Cure *cpy = new Cure(this->_type);
	return (cpy);
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << " wounds *" << std::endl;
}

std::ostream &operator<<(std::ostream &output, Cure const &rhs)
{
	output << rhs.getType() << std::endl;
	return (output);
}
