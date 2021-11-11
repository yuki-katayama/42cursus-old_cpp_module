#include "HumanB.hpp"

HumanB::HumanB(const std::string name)
:	_name(name)
{}

HumanB::HumanB(const HumanB &src)
:	_name(src._name)
{}

HumanB::~HumanB(void)
{}

void HumanB::attack(void) const
{
	if (this->_weapon == nullptr)
		std::cout << this->_name << " doesn't have any weapon." << std::endl;
	else
		std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
}

std::string &HumanB::getName(void)
{
	return (this->_name);
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}
