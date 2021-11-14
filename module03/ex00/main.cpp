#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap me;
	ClapTrap enemy("enemy");
	ClapTrap enemy1(enemy);
	ClapTrap enemy2 = enemy;

	std::cout << std::endl;
	std::cout << me << std::endl;

	/* 通常 */
	std::cout << std::endl;
	me.attack("enemy");
	me.takeDamage(5);
	me.beRepaired(2);

	/* HPより大きい時 */
	std::cout << std::endl;
	enemy.attack("enemy");
	enemy.takeDamage(100);
	enemy.beRepaired(100);

	/* アンダーフロー */
	std::cout << std::endl;
	enemy2.attack("enemy");
	enemy2.takeDamage(-1);
	enemy2.beRepaired(-1);
	std::cout << std::endl;

	return (0);
}
