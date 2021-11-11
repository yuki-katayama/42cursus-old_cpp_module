#include "HumanA.hpp"

HumanA::HumanA(const std::string name, const Weapon &weapon)
:	_name(name),
	_weapon(weapon)
{}

HumanA::~HumanA(void)
{}

void HumanA::attack(void)
{
	std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl;
}

std::string HumanA::getName(void)
{
	return (this->_name);
}