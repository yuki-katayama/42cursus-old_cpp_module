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
		ClapTrap(std::string const & name, unsigned int const & hitpoints, unsigned int const & energy_points, unsigned int const & attack_damage);
		ClapTrap(ClapTrap const & cpy);
		ClapTrap & operator=(ClapTrap const & rhs);
		virtual ~ClapTrap(void);
		void attack(std::string const & target) const;
		void takeDamage(unsigned int const & amount);
		void beRepaired(unsigned int const & amount);

		//getter
		std::string getName(void) const;
		unsigned int getHitpoints(void) const;
		unsigned int getEnergyPoints(void) const;
		unsigned int getAttackDamage(void) const;

	protected:
		std::string _name;
		unsigned int _hitpoints;
		unsigned int _hitpoints_max;
		unsigned int _energy_points;
		unsigned int _attack_damage;
};

std::ostream & operator<<(std::ostream & output, ClapTrap const & rhs);

#endif
