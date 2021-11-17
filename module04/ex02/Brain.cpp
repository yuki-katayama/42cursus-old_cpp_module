#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain: " << "default constructor called" << std::endl;
	for (size_t i = 0; i < _idea_size; i++) {
		std::stringstream sstrm;
		sstrm << i;
		sstrm >> this->ideas[i];
	}
		for (size_t i = 0; i < _idea_size; i++) {
		std::stringstream sstrm;
		sstrm << i;
		sstrm >> this->ideas[i];
	}
}

Brain::Brain(Brain const &cpy)
{
	std::cout << "Brain: " << "copy constructor called" << std::endl;
	for (size_t i = 0; i < _idea_size; i++) {
		this->ideas[i] = cpy.ideas[i];
	}
}

Brain &Brain::operator=(Brain const &rhs)
{
	std::cout << "Brain: " << "overload called" << std::endl;
	for (size_t i = 0; i < _idea_size; i++) {
		this->ideas[i] = rhs.ideas[i];
	}
	return (*this);
}

Brain::~Brain(void)
{
	std::cout << "Brain: destructor called" << std::endl;
}

void Brain::displayIdeas(void)
{
	for (size_t i = 0; i < _idea_size; i++) {
		std::cout << this->ideas[i] << " ";
	}
	std::cout << std::endl;
}
