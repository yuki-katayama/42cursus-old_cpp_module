#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include <iostream>

class Cat : public Animal
{
public:
	Cat(void);
	Cat(std::string const &type);
	Cat(Cat const &cpy);
	Cat &operator=(Cat const &rhs);
	~Cat();

	void makeSound(void) const;
};

std::ostream &operator<<(std::ostream &output, Cat const &rhs);

#endif
