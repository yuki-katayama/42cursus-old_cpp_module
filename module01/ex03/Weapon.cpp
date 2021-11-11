#include "Weapon.hpp"

Weapon::Weapon(void)
: _type("")
{}

Weapon::Weapon(const std:: string type)
: _type(type)
{}

Weapon::Weapon(const Weapon &src)
: _type(src._type)
{}

Weapon::~Weapon()
{}

void Weapon::setType(const std::string &type)
{
	this->_type = type;
}

const std::string &Weapon::getType(void) const
{
	return (this->_type);
}
