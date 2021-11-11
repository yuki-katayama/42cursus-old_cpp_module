#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {
private:
	std::string	_name;

public:
	Zombie();
	Zombie(const std::string name);
	Zombie(const Zombie &);
	~Zombie();

	// setter
	void set_name(std::string name);

	// getter
	std::string get_name(void);

	//other
	void announce(void) const;
};

#endif
