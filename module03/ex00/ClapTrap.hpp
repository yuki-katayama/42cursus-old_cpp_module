#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap {
	public:
		ClapTrap(void);
		ClapTrap(std::string const & name);
		ClapTrap(ClapTrap const & cpy);
		ClapTrap & operator=(ClapTrap const & rhs);
		~ClapTrap(void);
		void attack(std::string const & target) const;
		void takeDamage(unsigned int const & amount);
		void beRepaired(unsigned int const & amount);

		//getter
		std::string getName(void) const;
		unsigned int getHitpoints(void) const;
		unsigned int getEnergyPoints(void) const;
		unsigned int getAttackDamage(void) const;

	private:
		std::string _name;
		unsigned int _hitpoints;
		unsigned int _energy_points;
		unsigned int _attack_damage;
		static	unsigned int _hitpoints_max;
};

std::ostream & operator<<(std::ostream & output, ClapTrap & rhs);

#endif
