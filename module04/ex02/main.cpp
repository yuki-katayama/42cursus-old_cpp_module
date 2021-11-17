#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#define LENGTH 2

void test(void)
{
	Animal *animal[LENGTH];
	for (int i = 0; i < LENGTH; i++)
	{
		std::cout << i << " ";
		if (i < LENGTH / 2)
			animal[i] = new Dog();
		else
			animal[i] = new Cat();
		std::cout << std::endl;
	}
	std::cout << std::endl;
	(((Dog *)animal[0])->getBrain())->displayIdeas();
	std::cout << std::endl;
	int i = 0;
	while (animal[i])
	{
		animal[i]->makeSound();
		delete animal[i];
		std::cout << std::endl;
		i++;
	}
}

int main()
{
	test();
	// while(1){}
}
