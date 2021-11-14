#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap me;
	ClapTrap enemy("enemy");
	ClapTrap enemy1 = enemy;

	/* 通常 */
	me.attack("enemy");
	me.takeDamage(5);
	me.beRepaired(5);

	/* HPより大きい時 */
	std::cout << std::endl;
	me.attack("enemy");
	me.takeDamage(100);
	me.beRepaired(100);

	/* どちらも0 */
	std::cout << std::endl;
	me.attack("enemy");
	me.takeDamage(0);
	me.beRepaired(0);

	/* アンダーフロー */
	std::cout << std::endl;
	me.attack("enemy");
	me.takeDamage(-1);
	me.beRepaired(-1);
	return (0);
}
