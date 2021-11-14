#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

// # include <iostream>
# include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
	public:
		enum default_status {
			DEFAULT_HIT_POINTS = 100,
			DEFAULT_ENERGY_POINTS = 100,
			DEFAULT_ATTACK_DAMAGE = 30
		};
		FragTrap(void);
		FragTrap(std::string const & name);
		FragTrap(FragTrap const & cpy);
		FragTrap & operator=(FragTrap const & rhs);
		~FragTrap(void);

		void	highFivesGuys(void);
};

std::ostream & operator<<(std::ostream & output, FragTrap const & rhs);

#endif
