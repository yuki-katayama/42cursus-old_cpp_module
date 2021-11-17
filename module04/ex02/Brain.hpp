#ifndef BRAIN_HPP
# define BRAIN_HPP

#include "Animal.hpp"
#include <iostream>
#include <sstream>

class Brain {
	public:
		Brain(void);
		Brain(Brain const &cpy);
		Brain &operator=(Brain const &rhs);
		~Brain();

		void	displayIdeas(void);
	private:
		static size_t const _idea_size = 100;
		std::string ideas[_idea_size];
};

#endif
