#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include <iostream>

class Dog: public Animal {
	public:
		Dog(void);
		Dog(std::string const & type);
		Dog(Dog const &cpy);
		Dog &operator=(Dog const &rhs);
		~Dog();

		void	makeSound(void) const;
};

std::ostream	&operator<<(std::ostream stream, Dog const &rhs);

#endif
