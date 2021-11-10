#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

void test(void)
{
	Zombie *zombies;
	zombies = zombieHorde(5, "kyuki");
	for (int i = 0; i < 5; i++)
	{
		std::cout << "index[" << i << "] "
			<< zombies[i].get_name() << " ";
		zombies[i].announce();
	}
	delete [] zombies;
}

int main(void){
	test();
	// while(1){}
}
