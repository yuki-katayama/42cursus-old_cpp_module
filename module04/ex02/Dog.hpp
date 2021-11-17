#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal {
	public:
		Dog(void);
		Dog(std::string const & type);
		Dog(Dog const &cpy);
		Dog &operator=(Dog const &rhs);
		~Dog();

		void	makeSound(void) const;

		// getter
		Brain *getBrain(void) const;
	private:
		Brain	*_brain;
};

std::ostream	&operator<<(std::ostream stream, Dog const &rhs);

#endif
