#include "HumanA.hpp"

HumanA::HumanA(const std::string name, Weapon &weapon)
:	_name(name),
	_weapon(weapon)
{}

HumanA::HumanA(const HumanA &src)
:	_name(src._name),
	_weapon(src._weapon)
{}

HumanA::~HumanA(void)
{}

void HumanA::attack(void) const
{
	std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl;
}

std::string &HumanA::getName(void)
{
	return (this->_name);
}
