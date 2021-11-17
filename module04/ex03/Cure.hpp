#ifndef CURE_HPP
#define CURE_HPP

#include <iostream>
#include "AMateria.hpp"

class Cure : public AMateria
{
public:
	Cure(void);
	Cure(std::string const &type);
	Cure(Cure const &cpy);
	Cure &operator=(Cure const &rhs);
	~Cure(void);
	AMateria *clone(void) const;
	void use(ICharacter &target);
};

std::ostream &operator<<(std::ostream &output, Cure const &rhs);

#endif
