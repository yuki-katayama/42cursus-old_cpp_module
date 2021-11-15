#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap {
	public:
		enum default_status {
			DEFAULT_HIT_POINTS = 10,
			DEFAULT_ENERGY_POINTS = 10,
			DEFAULT_ATTACK_DAMAGE = 0
		};
		ClapTrap(void);
		ClapTrap(std::string const & name);
		ClapTrap(std::string const & name, unsigned int const & hit_points, unsigned int const & energy_points, unsigned int const & attack_damage);
		ClapTrap(ClapTrap const & cpy);
		ClapTrap & operator=(ClapTrap const & rhs);
		virtual ~ClapTrap(void);
		void attack(std::string const & target) const;
		void takeDamage(unsigned int const & amount);
		void beRepaired(unsigned int const & amount);

		//getter
		std::string getName(void) const;
		unsigned int getHitPoints(void) const;
		unsigned int getEnergyPoints(void) const;
		unsigned int getAttackDamage(void) const;

		//setter
		void	Name(std::string const & name);

	protected:
		std::string _name;
		unsigned int _hit_points;
		unsigned int _hit_points_max;
		unsigned int _energy_points;
		unsigned int _attack_damage;
		static unsigned int const _default_hit_points = DEFAULT_HIT_POINTS;
		static unsigned int const _default_hit_points_max = DEFAULT_HIT_POINTS;
		static unsigned int const _default_energy_points = DEFAULT_ENERGY_POINTS;
		static unsigned int const _default_attack_damage = DEFAULT_ATTACK_DAMAGE;
};

std::ostream & operator<<(std::ostream & output, ClapTrap const & rhs);

#endif
