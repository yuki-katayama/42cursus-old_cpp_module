#ifndef ICE_HPP
#define ICE_HPP

#include <iostream>
#include "AMateria.hpp"

class Ice : public AMateria
{
public:
	Ice(void);
	Ice(std::string const &type);
	Ice(Ice const &cpy);
	Ice &operator=(Ice const &rhs);
	~Ice(void);
	AMateria *clone(void) const;
	void use(ICharacter &target);
};

std::ostream &operator<<(std::ostream &output, Ice const &rhs);

#endif
