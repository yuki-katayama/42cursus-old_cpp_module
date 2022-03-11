#include "Character.hpp"

Character::Character(std::string const &name)
:	_name(name),
	_trash_idx(0)
{
	for (size_t i = 0; i < MATERIA_MAX; i++)
	{
		this->_materia[i] = NULL;
	}
}

Character::Character(Character const &cpy)
:	_trash_idx(0)
{
	this->_name = cpy._name;
	for (size_t i = 0; i < MATERIA_MAX; i++)
	{
		this->_materia[i] = cpy._materia[i] ? cpy._materia[i]->clone() : NULL;
	}
}

Character::~Character(void)
{
	for (size_t i = 0; i < MATERIA_MAX; i++)
	{
		if (this->_materia[i] != NULL)
			delete this->_materia[i];
	}
	for (size_t i = 0; i <= this->_trash_idx; i++)
		delete this->_trash[i];
	return ;
}

Character &Character::operator=(Character const &rhs)
{
	this->_name = rhs._name;
	for (size_t i = 0; i < MATERIA_MAX; i++)
	{
		if (this->_materia[i]) {
			delete this->_materia[i];
		}
		this->_materia[i] = rhs._materia[i] ? rhs._materia[i]->clone() : NULL;
	}
	return (*this);
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
	this->_trash[this->_trash_idx++] = m;
	return;
}

void Character::unequip(int idx)
{
	if (idx >= MATERIA_MAX || idx < 0 || !this->_materia[idx])
		return;
	this->_trash[this->_trash_idx++] = this->_materia[idx];
	this->_materia[idx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx >= MATERIA_MAX || idx < 0 || !this->_materia[idx])
		return;
	this->_materia[idx]->use(target);
}
