#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
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
		virtual ~ScavTrap(void);

		void guardGate(void);
		void attack(std::string const & target) const;
	protected:
		bool	_gurad_mode;
		static unsigned int const _default_hit_points = DEFAULT_HIT_POINTS;
		static unsigned int const _default_hit_points_max = DEFAULT_HIT_POINTS;
		static unsigned int const _default_energy_points = DEFAULT_ENERGY_POINTS;
		static unsigned int const _default_attack_damage = DEFAULT_ATTACK_DAMAGE;
};

std::ostream & operator<<(std::ostream & output, ScavTrap const & rhs);

#endif
