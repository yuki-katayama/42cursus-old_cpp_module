#include "ScavTrap.hpp"
#include "FragTrap.hpp"

static void clapTrap(void)
{
	std::cout << "-------- calpTrap ------"<< std::endl;
	ClapTrap me;
	ClapTrap enemy("enemy");
	ClapTrap enemy1(enemy);
	ClapTrap enemy2 = enemy;
	std::cout << std::endl;
	std::cout << "Default status\n" << me << std::endl;

	/* 通常 */
	std::cout << std::endl;
	me.attack("enemy");
	me.takeDamage(5);
	me.beRepaired(2);

	/* HPより大きい時 */
	std::cout << std::endl;
	enemy.attack("enemy");
	enemy.takeDamage(100);

	std::cout << "\n" << std::endl;
	enemy.beRepaired(100);
}

static void scavTrap(void)
{
	std::cout << "\n\n-------- ScavTrap ------"<< std::endl;
	ScavTrap me;
	ScavTrap enemy("enemy");
	ScavTrap enemy1(enemy);

	// enemy1 = enemy;
	std::cout << std::endl;
	std::cout << "Default status\n" << me << std::endl;

	/* 通常 */
	std::cout << std::endl;
	me.attack("enemy");
	me.takeDamage(5);
	me.beRepaired(2);

	/* HPより大きい時 */
	std::cout << std::endl;
	enemy.attack("enemy");
	enemy.takeDamage(200);
	enemy.beRepaired(200);

	std::cout << std::endl;
	me.guardGate();
	enemy.guardGate();
	std::cout << std::endl;
}

static void fragTrap(void)
{
	std::cout << "\n\n-------- FragTrap ------"<< std::endl;
	FragTrap me;
	FragTrap enemy("enemy");
	FragTrap enemy1(enemy);

	// enemy1 = enemy;
	std::cout << std::endl;
	std::cout << "Default status\n" << me << std::endl;

	/* 通常 */
	std::cout << std::endl;
	me.attack("enemy");
	me.takeDamage(5);
	me.beRepaired(2);

	/* HPより大きい時 */
	std::cout << std::endl;
	enemy.attack("enemy");
	enemy.takeDamage(200);
	enemy.beRepaired(200);

	std::cout << std::endl;
	me.highFivesGuys();
	enemy.highFivesGuys();
	std::cout << std::endl;
}

int main(void)
{
	clapTrap();
	scavTrap();
	fragTrap();
	return (0);
}
