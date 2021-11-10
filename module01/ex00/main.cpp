#include "Zombie.hpp"

Zombie* newZombie( std::string name );
void randomChump( std::string name );

void test(void)
{
	Zombie *zombie1;
	Zombie *zombie2;

	zombie1 = newZombie( "42tokyo" );
	zombie1->announce();
	delete zombie1;
	randomChump("42");
	zombie2 = newZombie( "kyuki" );
	zombie2->announce();
	delete zombie2;
}

int main(void){
	test();
	// while(1){};
}
