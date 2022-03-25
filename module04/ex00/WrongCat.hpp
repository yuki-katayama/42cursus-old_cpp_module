#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"
#include <iostream>

class WrongCat : public WrongAnimal
{
public:
	WrongCat(void);
	WrongCat(std::string const &type);
	WrongCat(WrongCat const &cpy);
	WrongCat &operator=(WrongCat const &rhs);
	~WrongCat();

	void makeSound(void) const;
};

std::ostream &operator<<(std::ostream &output, WrongCat const &rhs);

#endif
