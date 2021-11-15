#include "FragTrap.hpp"

FragTrap::FragTrap(void)
:	ClapTrap()
{
	this->_name = "FragTrap";
	this->_hit_points = DEFAULT_HIT_POINTS;
	this->_hit_points_max = DEFAULT_HIT_POINTS;
	this->_energy_points = DEFAULT_ENERGY_POINTS;
	this->_attack_damage = DEFAULT_ATTACK_DAMAGE;
	std::cout << "FragTrap: " << this->_name << " default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string const & name)
:	ClapTrap(name, DEFAULT_HIT_POINTS, DEFAULT_ENERGY_POINTS, DEFAULT_ATTACK_DAMAGE)
{
	std::cout << "FragTrap: " << this->_name << " name constructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap const & cpy)
:	ClapTrap(cpy._name, cpy._hit_points, cpy._energy_points, cpy._attack_damage)
{
	std::cout << "FragTrap: " << this->_name << " copy constructor called" << std::endl;
}

FragTrap & FragTrap::operator=(FragTrap const & rhs)
{
	std::cout << "FragTrap: " << rhs._name << " Assignation operator called" << std::endl;
	this->_name = rhs._name;
	this->_hit_points = rhs._hit_points;
	this->_energy_points = rhs._energy_points;
	this->_attack_damage = rhs._attack_damage;
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap: " << this->_name << " destructor called" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap: " << this->_name << " positive high fives request" << std::endl;
}

std::ostream & operator<<(std::ostream & output, FragTrap const & rhs)
{
	output << "name: " << rhs.getName()
			<< "\nhit_points: " << rhs.getHitPoints()
			<< "\nenergyPoints: " << rhs.getEnergyPoints()
			<< "\nattackDamage: " << rhs.getAttackDamage() << std::endl;
	return (output);
}
