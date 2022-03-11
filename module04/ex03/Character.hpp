#ifndef CHARACTER_HPP
#define CHARACTER_HPP

# include <iostream>
# include "ICharacter.hpp"
# include "AMateria.hpp"

#define MATERIA_MAX 4
#define TRASH_MAX 100

class Character : public ICharacter
{
public:
	Character(std::string const &name);
	Character(Character const &cpy);
	Character &operator=(Character const &rhs);
	~Character(void);
	std::string const &getName() const;
	void equip(AMateria *m);
	void unequip(int idx);
	void use(int idx, ICharacter &target);

private:
	std::string _name;
	size_t _trash_idx;
	AMateria *_trash[TRASH_MAX];
	AMateria *_materia[MATERIA_MAX];
};

#endif
