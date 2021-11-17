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
}

void MateriaSource::learnMateria(AMateria *cpy)
{
	for (int i = 0; i < MEM_MATERIA_MAX; i++)
	{
		if (this->_mem_materia[i] == NULL)
		{
			this->_mem_materia[i] = cpy->clone();
			return;
		}
	}
	return;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	if (type == "cure")
		return new Cure("cure");
	else if (type == "ice")
		return new Ice("ice");
	else
		return NULL;
}
