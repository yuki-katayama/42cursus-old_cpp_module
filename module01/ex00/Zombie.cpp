#include "Zombie.hpp"

Zombie::Zombie()
: _name("42Tokyo")
{}

Zombie::Zombie(const std::string name)
: _name(name)
{}

Zombie::Zombie(const Zombie &src)
: _name(src._name)
{}

Zombie::~Zombie()
{
	std::cout << this->_name << " was died." << std::endl;
}

void Zombie::announce() const {
	std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}
