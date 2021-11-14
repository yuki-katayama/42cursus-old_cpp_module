#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap {
	public:
		ClapTrap(void);
		ClapTrap(std::string const & name);
		ClapTrap(ClapTrap const & cpy);
		~ClapTrap(void);
		void attack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
	private:
		std::string _name;
		unsigned int _hitpoints;
		unsigned int _energy_points;
		unsigned int _attack_damage;
		static	unsigned int _hitpoints_max;
};

#endif
