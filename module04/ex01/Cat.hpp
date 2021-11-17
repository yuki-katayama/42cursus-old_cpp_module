#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal {
	public:
		Cat(void);
		Cat(std::string const &type);
		Cat(Cat const &cpy);
		Cat &operator=(Cat const &rhs);
		~Cat();

		void	makeSound(void) const;

		// getter
		Brain *getBrain(void) const;
	private:
		Brain	*_brain;
};

std::ostream	&operator<<(std::ostream &output, Cat const &rhs);

#endif
