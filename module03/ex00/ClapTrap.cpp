#include "ClapTrap.hpp"

unsigned int	ClapTrap::_hitpoints_max = 10;

ClapTrap::ClapTrap(void)
:	_name("42tokyo"),
	_hitpoints(10),
	_energy_points(10),
	_attack_damage(0)
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string const & name)
:	_name(name),
	_hitpoints(10),
	_energy_points(10),
	_attack_damage(0)
{
	std::cout << "Name constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & cpy)
:	_name(cpy._name),
	_hitpoints(cpy._hitpoints),
	_energy_points(cpy._energy_points),
	_attack_damage(cpy._attack_damage)
{
	std::cout << "Copy constructor called" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

void ClapTrap::attack(std::string const & target)
{
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	unsigned int attackedPoints;

	if (this->_hitpoints < amount)
		attackedPoints = this->_hitpoints;
	else
		attackedPoints = amount;
	this->_hitpoints -= attackedPoints;
	std::cout << "ClapTrap " << this->_name << " has been attacked, causing " << attackedPoints << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	unsigned int repairedPoints;

	if (this->_hitpoints + amount > _hitpoints_max)
		repairedPoints = _hitpoints_max - this->_hitpoints;
	else
		repairedPoints = amount;
	this->_hitpoints += repairedPoints;
	std::cout << "ClapTrap " << this->_name << " has been repaired, causing " << repairedPoints << "  points of recovery! " << this->_hitpoints << " points left." << std::endl;
}
