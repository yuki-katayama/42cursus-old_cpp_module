#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	public:
		enum default_status {
			DEFAULT_HIT_POINTS = 100,
			DEFAULT_ENERGY_POINTS = 50,
			DEFAULT_ATTACK_DAMAGE = 20
		};
		ScavTrap(void);
		ScavTrap(std::string const & name);
		ScavTrap(ScavTrap const & cpy);
		ScavTrap & operator=(ScavTrap const & rhs);
		~ScavTrap(void);

		void guardGate(void);
};

std::ostream & operator<<(std::ostream & output, ScavTrap const & rhs);

#endif
