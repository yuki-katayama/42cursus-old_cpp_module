#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
public:
	Animal(void);
	Animal(std::string const &type);
	Animal(Animal const &cpy);
	Animal &operator=(Animal const &rhs);
	virtual ~Animal();

	virtual void makeSound(void) const;

	/* getter */
	std::string const &getType(void) const;

protected:
	std::string type;
};

std::ostream &operator<<(std::ostream &output, Animal const &rhs);

#endif
