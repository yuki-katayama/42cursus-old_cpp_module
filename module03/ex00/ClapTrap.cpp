#include "ClapTrap.hpp"

unsigned int	ClapTrap::_hitpoints_max = 10;

ClapTrap::ClapTrap(void)
:	_name("ClapTrap"),
	_hitpoints(10),
	_energy_points(10),
	_attack_damage(0)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string const & name)
:	_name(name),
	_hitpoints(10),
	_energy_points(10),
	_attack_damage(0)
{
	std::cout << "ClapTrap name constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & cpy)
:	_name(cpy._name),
	_hitpoints(cpy._hitpoints),
	_energy_points(cpy._energy_points),
	_attack_damage(cpy._attack_damage)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs)
{
	this->_name = rhs._name;
	this->_hitpoints = rhs._hitpoints;
	this->_energy_points = rhs._energy_points;
	this->_attack_damage = rhs._attack_damage;
	return (*this);
}

std::ostream & operator<<(std::ostream & output, ClapTrap & rhs)
{
	output << "name: " << rhs.getName() << std::endl
			<< "hitpoints: " << rhs.getHitpoints() << std::endl
			<< "energyPoints: " << rhs.getEnergyPoints() << std::endl
			<< "attackDamage: " << rhs.getAttackDamage() << std::endl;
	return output;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

void ClapTrap::attack(std::string const & target) const
{
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int const & amount)
{
	unsigned int attackedPoints;

	if (this->_hitpoints < amount)
		attackedPoints = this->_hitpoints;
	else
		attackedPoints = amount;
	this->_hitpoints -= attackedPoints;
	std::cout << "ClapTrap " << this->_name << " has been attacked, causing " << attackedPoints << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int const & amount)
{
	unsigned int repairedPoints;

	if (this->_hitpoints + amount > _hitpoints_max)
		repairedPoints = _hitpoints_max - this->_hitpoints;
	else
		repairedPoints = amount;
	this->_hitpoints += repairedPoints;
	std::cout << "ClapTrap " << this->_name << " has been repaired, causing " << repairedPoints << "  points of recovery! " << this->_hitpoints << " points left." << std::endl;
}

std::string	ClapTrap::getName(void) const
{
	return (this->_name);
}

unsigned int	ClapTrap::getHitpoints(void) const
{
	return (this->_hitpoints);
}

unsigned int	ClapTrap::getEnergyPoints(void) const
{
	return (this->_energy_points);
}
unsigned int	ClapTrap::getAttackDamage(void) const
{
	return (this->_attack_damage);
}
