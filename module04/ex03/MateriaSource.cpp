#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	for (int i = 0; i < MEM_MATERIA_MAX; i++)
	{
		this->_mem_materia[i] = NULL;
	}
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < MEM_MATERIA_MAX; i++)
	{
		if (this->_mem_materia[i] == NULL)
			return;
		delete this->_mem_materia[i];
	}
	return;
}

void MateriaSource::learnMateria(AMateria *cpy)
{
	for (int i = 0; i < MEM_MATERIA_MAX; i++)
	{
		if (this->_mem_materia[i] == NULL)
		{
			this->_mem_materia[i] = cpy;
			return;
		}
	}
	return;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < MEM_MATERIA_MAX; i++)
	{
		if ((this->_mem_materia[i] != NULL) && (this->_mem_materia[i]->getType() == type))
			return this->_mem_materia[i]->clone();
	}
	return NULL;
}
