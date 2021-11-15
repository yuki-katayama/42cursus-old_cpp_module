#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
:	ClapTrap("DiamondTrap"),
	ScavTrap("DiamondTrap"),
	FragTrap("DiamondTrap"),
	_name("DiamondTrap")
{
	ClapTrap::Name(this->_name + "_clap_name");
	this->_hit_points = FragTrap::_default_hit_points;
	this->_hit_points_max = FragTrap::_default_hit_points_max;
	this->_energy_points = ScavTrap::_default_energy_points;
	this->_attack_damage = FragTrap::_default_attack_damage;
	std::cout << "DiamondTrap: " << this->_name << " default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string const & name)
:	ClapTrap(name),
	ScavTrap(name),
	FragTrap(name),
	_name(name)
{
	ClapTrap::Name(this->_name + "_clap_name");
	this->_hit_points = FragTrap::_default_hit_points;
	this->_hit_points_max = FragTrap::_default_hit_points_max;
	this->_energy_points = ScavTrap::_default_energy_points;
	this->_attack_damage = FragTrap::_default_attack_damage;
	std::cout << "DiamondTrap: " << this->_name << " default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const & cpy)
:	ClapTrap(cpy._name),
	ScavTrap(cpy._name),
	FragTrap(cpy._name),
	_name(cpy._name)
{
	ClapTrap::Name(this->_name + "_clap_name");
	this->_hit_points = cpy._hit_points;
	this->_hit_points_max = cpy._hit_points_max;
	this->_energy_points = cpy._hit_points;
	this->_attack_damage = cpy._attack_damage;
	std::cout << "DiamondTrap: " << this->_name << " copy constructor called" << std::endl;
}

DiamondTrap & DiamondTrap::operator=(DiamondTrap const & rhs)
{
	std::cout << "DiamondTrap: " << rhs._name << " Assignation operator called" << std::endl;
	ClapTrap::Name(rhs._name + "_clap_name");
	this->_name = rhs._name;
	this->_hit_points = rhs._hit_points;
	this->_hit_points_max = rhs._hit_points_max;
	this->_energy_points = rhs._energy_points;
	this->_attack_damage = rhs._attack_damage;
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap: " << this->_name << " destructor called" << std::endl;
}

void	DiamondTrap::whoAmi(void)
{
	std::cout << "DiamondTrap: \n" << "         name = " << this->_name << "\nclapTrap name = " << ClapTrap::_name << std::endl;
}

void	DiamondTrap::attack(std::string const & target) {
    this->ScavTrap::attack(target);
}

std::string & DiamondTrap::getName(void)
{
	return (this->_name);
}

std::ostream & operator<<(std::ostream & output, DiamondTrap & rhs)
{
	output << "name: " << rhs.getName()
			<< "\nhitpoints: " << rhs.getHitPoints()
			<< "\nenergyPoints: " << rhs.getEnergyPoints()
			<< "\nattackDamage: " << rhs.getAttackDamage() << std::endl;
	return (output);
}
