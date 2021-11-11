#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA {
	private:
		std::string _name;
		Weapon		&_weapon;
	public:
		HumanA(const std::string name, Weapon &);
		HumanA(const HumanA &);
		~HumanA(void);

		void attack(void) const;
		std::string &getName(void);
};

#endif
