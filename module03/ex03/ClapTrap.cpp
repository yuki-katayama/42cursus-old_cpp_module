#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
:	_name("ClapTrap"),
	_hit_points(DEFAULT_HIT_POINTS),
	_hit_points_max(DEFAULT_HIT_POINTS),
	_energy_points(DEFAULT_ENERGY_POINTS),
	_attack_damage(DEFAULT_ATTACK_DAMAGE)
{
	std::cout << "ClapTrap: " << this->_name << " default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string const & name)
:	_name(name),
	_hit_points(DEFAULT_HIT_POINTS),
	_hit_points_max(DEFAULT_HIT_POINTS),
	_energy_points(DEFAULT_ENERGY_POINTS),
	_attack_damage(DEFAULT_ATTACK_DAMAGE)
{
	std::cout << "ClapTrap: " << this->_name << " name constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string const & name, unsigned int const & hit_points, unsigned int const & energy_points, unsigned int const & attack_damage)
:	_name(name),
	_hit_points(hit_points),
	_hit_points_max(hit_points),
	_energy_points(energy_points),
	_attack_damage(attack_damage)
{
	std::cout << "ClapTrap: " << this->_name << " all parameters constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & cpy)
:	_name(cpy._name),
	_hit_points(cpy._hit_points),
	_hit_points_max(cpy._hit_points_max),
	_energy_points(cpy._energy_points),
	_attack_damage(cpy._attack_damage)
{
	std::cout << "ClapTrap: " << this->_name << " copy constructor called" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap: " << this->_name << " destructor called" << std::endl;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs)
{
	std::cout << "ClapTrap: " << rhs._name << " Assignation operator called" << std::endl;
	this->_name = rhs._name;
	this->_hit_points = rhs._hit_points;
	this->_hit_points_max = rhs._hit_points_max;
	this->_energy_points = rhs._energy_points;
	this->_attack_damage = rhs._attack_damage;
	return (*this);
}


std::ostream & operator<<(std::ostream & output, ClapTrap const & rhs)
{
	output << "name: " << rhs.getName()
			<< "\nhit_points: " << rhs.getHitPoints()
			<< "\nenergyPoints: " << rhs.getEnergyPoints()
			<< "\nattackDamage: " << rhs.getAttackDamage() << std::endl;
	return output;
}


void ClapTrap::attack(std::string const & target) const
{
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int const & amount)
{
	unsigned int attackedPoints;

	if (this->_hit_points < amount)
		attackedPoints = this->_hit_points;
	else
		attackedPoints = amount;
	this->_hit_points -= attackedPoints;
	std::cout << "ClapTrap " << this->_name << " has been attacked, causing " << attackedPoints << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int const & amount)
{
	unsigned int repairedPoints;

	if (this->_hit_points + amount > this->_hit_points_max)
		repairedPoints = this->_hit_points_max - this->_hit_points;
	else
		repairedPoints = amount;
	this->_hit_points += repairedPoints;
	std::cout << "ClapTrap " << this->_name << " has been repaired, causing " << repairedPoints << "  points of recovery! " << this->_hit_points << " points left." << std::endl;
}

std::string	ClapTrap::getName(void) const
{
	return (this->_name);
}

unsigned int	ClapTrap::getHitPoints(void) const
{
	return (this->_hit_points);
}

unsigned int	ClapTrap::getEnergyPoints(void) const
{
	return (this->_energy_points);
}
unsigned int	ClapTrap::getAttackDamage(void) const
{
	return (this->_attack_damage);
}

void	ClapTrap::Name(std::string const & name)
{
	this->_name = name;
}
