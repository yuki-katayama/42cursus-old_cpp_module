#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA {
	private:
		std::string _name;
		Weapon		_weapon;
	public:
		HumanA(const std::string name, const Weapon &);
		HumanA(const HumanA &);
		~HumanA();

		void attack(void);
		void getName(void);
};

#endif