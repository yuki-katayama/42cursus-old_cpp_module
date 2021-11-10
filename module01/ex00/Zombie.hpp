#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {
private:
	const std::string	_name;

public:
	Zombie();
	Zombie(const std::string name);
	Zombie(const Zombie &);
	~Zombie();
	void announce(void) const;
};

#endif