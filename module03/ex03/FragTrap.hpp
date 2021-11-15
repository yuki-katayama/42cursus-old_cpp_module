#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

// # include <iostream>
# include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
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
		virtual ~FragTrap(void);

		void	highFivesGuys(void);
	protected:
		static unsigned int const _default_hit_points = DEFAULT_HIT_POINTS;
		static unsigned int const _default_hit_points_max = DEFAULT_HIT_POINTS;
		static unsigned int const _default_energy_points = DEFAULT_ENERGY_POINTS;
		static unsigned int const _default_attack_damage = DEFAULT_ATTACK_DAMAGE;
};

std::ostream & operator<<(std::ostream & output, FragTrap const & rhs);

#endif
