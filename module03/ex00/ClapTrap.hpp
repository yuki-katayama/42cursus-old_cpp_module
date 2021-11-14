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
		void attack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		//getter
		std::string getName(void);
		unsigned int getHitpoints(void);
		unsigned int getEnergyPoints(void);
		unsigned int getAttackDamage(void);

	private:
		std::string _name;
		unsigned int _hitpoints;
		unsigned int _energy_points;
		unsigned int _attack_damage;
		static	unsigned int _hitpoints_max;
};

std::ostream & operator<<(std::ostream & output, ClapTrap & rhs);

#endif
