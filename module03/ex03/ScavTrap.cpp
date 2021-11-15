#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
:	ClapTrap()
{
	this->_name = "ScavTrap";
	this->_hit_points = DEFAULT_HIT_POINTS;
	this->_hit_points_max = DEFAULT_HIT_POINTS;
	this->_energy_points = DEFAULT_ENERGY_POINTS;
	this->_attack_damage = DEFAULT_ATTACK_DAMAGE;
	std::cout << "ScavTrap: " << this->_name << " default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string const & name)
:	ClapTrap(name, DEFAULT_HIT_POINTS, DEFAULT_ENERGY_POINTS, DEFAULT_ATTACK_DAMAGE)
{
	std::cout << "ScavTrap: " << this->_name << " name constructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & cpy)
:	ClapTrap(cpy._name, cpy._hit_points, cpy._energy_points, cpy._attack_damage),
	_gurad_mode(cpy._gurad_mode)
{
	std::cout << "ScavTrap: " << this->_name << " copy constructor called" << std::endl;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & rhs)
{
	std::cout << "ScavTrap: " << rhs._name << " Assignation operator called" << std::endl;
	this->_name = rhs._name;
	this->_hit_points = rhs._hit_points;
	this->_energy_points = rhs._energy_points;
	this->_attack_damage = rhs._attack_damage;
	this->_gurad_mode = rhs._gurad_mode;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap: " << this->_name << " destructor called" << std::endl;
}

void ScavTrap::guardGate(void)
{
	this->_gurad_mode = true;
	std::cout << "ScavTrap: " << this->_name << " have enterred in Gate keeper mode" << std::endl;
}

void ScavTrap::attack(std::string const & target) const
{
	std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
}

std::ostream & operator<<(std::ostream & output, ScavTrap const & rhs)
{
	output << "name: " << rhs.getName()
			<< "\nhit_points: " << rhs.getHitPoints()
			<< "\nenergyPoints: " << rhs.getEnergyPoints()
			<< "\nattackDamage: " << rhs.getAttackDamage() << std::endl;
	return (output);
}
