#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include <iostream>
#include "IMateriaSource.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

#define MEM_MATERIA_MAX 4

class MateriaSource : public IMateriaSource
{
public:
	MateriaSource();
	~MateriaSource();
	void learnMateria(AMateria *cpy);
	AMateria *createMateria(std::string const &type);

private:
	AMateria *_mem_materia[MEM_MATERIA_MAX];
};

#endif
