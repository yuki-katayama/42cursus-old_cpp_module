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
	void setName(std::string name);

	// getter
	std::string getName(void);

	//other
	void announce(void) const;
};

#endif
