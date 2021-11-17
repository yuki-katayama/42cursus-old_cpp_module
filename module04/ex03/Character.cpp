#include "Character.hpp"

Character::Character(std::string const &name)
	: _name(name)
{
	for (size_t i = 0; i < MATERIA_MAX; i++)
	{
		this->_materia[i] = NULL;
	}
}

Character::~Character(void)
{
	for (size_t i = 0; i < MATERIA_MAX; i++)
	{
		if (this->_materia[i] != NULL)
		{
			std::cout << i << std::endl;
			delete this->_materia[i];
		}
	}
	return ;
}

std::string const &Character::getName(void) const
{
	return (this->_name);
}

void Character::equip(AMateria *m)
{
	for (int i = 0; i < MATERIA_MAX; i++)
	{
		if (this->_materia[i] == NULL)
		{
			this->_materia[i] = m;
			return;
		}
	}
	return;
}

void Character::unequip(int idx)
{
	if (idx >= MATERIA_MAX || idx < 0 || !this->_materia[idx])
		return;
	this->_materia[idx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx >= MATERIA_MAX || idx < 0 || !this->_materia[idx])
		return;
	this->_materia[idx]->use(target);
}
