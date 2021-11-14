#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
:	ClapTrap("42tokyo", DEFAULT_HIT_POINTS, DEFAULT_ENERGY_POINTS, DEFAULT_ATTACK_DAMAGE)
{
	std::cout << "ScavTrap " << this->_name << " default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string const & name)
:	ClapTrap(name, DEFAULT_HIT_POINTS, DEFAULT_ENERGY_POINTS, DEFAULT_ATTACK_DAMAGE)
{
	std::cout << "ScavTrap " << this->_name << " name constructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & cpy)
:	ClapTrap(cpy._name, cpy._hitpoints, cpy._energy_points, cpy._attack_damage)
{
	std::cout << "ScavTrap " << this->_name << " copy constructor called" << std::endl;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & rhs)
{
	std::cout << "ScavTrap " << rhs._name << " Assignation operator called" << std::endl;
	this->_name = rhs._name;
	this->_hitpoints = rhs._hitpoints;
	this->_energy_points = rhs._energy_points;
	this->_attack_damage = rhs._attack_damage;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->_name << " destructor called" << std::endl;
}

void ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->_name << " have enterred in Gate keeper mode" << std::endl;
}

std::ostream & operator<<(std::ostream & output, ScavTrap const & rhs)
{
	output << "name: " << rhs.getName()
			<< "\nhitpoints: " << rhs.getHitpoints()
			<< "\nenergyPoints: " << rhs.getEnergyPoints()
			<< "\nattackDamage: " << rhs.getAttackDamage() << std::endl;
	return (output);
}
