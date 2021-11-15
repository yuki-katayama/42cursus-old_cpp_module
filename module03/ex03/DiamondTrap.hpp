#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <iostream>
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap {
	public:
		DiamondTrap(void);
		DiamondTrap(std::string const & name);
		DiamondTrap(std::string const & name, unsigned int const & hit_points, unsigned int const & energy_points, unsigned int const & attack_damage);
		DiamondTrap(DiamondTrap const & cpy);
		DiamondTrap & operator=(DiamondTrap const & rhs);
		virtual ~DiamondTrap(void);

		void	whoAmi(void);
		void	attack(std::string const & target);

		//getter
		std::string	& getName(void);

	private:
		std::string _name;
};

std::ostream & operator<<(std::ostream & output, DiamondTrap & rhs);

#endif
