#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
public:
	WrongAnimal(void);
	WrongAnimal(std::string const &type);
	WrongAnimal(WrongAnimal const &cpy);
	WrongAnimal &operator=(WrongAnimal const &rhs);
	virtual ~WrongAnimal();

	virtual void makeSound(void) const;

	/* getter */
	std::string const &getType(void) const;

protected:
	std::string type;
};

std::ostream &operator<<(std::ostream &output, WrongAnimal const &rhs);

#endif
