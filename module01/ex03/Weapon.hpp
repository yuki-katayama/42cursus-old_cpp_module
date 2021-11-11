#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon {
	private:
		std::string _type;
	public:
		Weapon(void);
		Weapon(const std::string type);
		Weapon(const Weapon &);
		~Weapon();

		// setter
		void setType(const std::string &type);

		// getter
		const std::string &getType(void) const;

		//other
};

#endif
