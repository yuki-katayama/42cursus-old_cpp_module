#include "Karen.hpp"

int main(int argc, char *argv[])
{
	Karen karen;

	if (argc != 2)
	{
		std::cout << "Error: Wrong number of arguments" << std::endl;
		return (1);
	}
	
	std::cout << "[ DEBUG ] " << std::endl;
	karen.complain("DEBUG");
	std::cout << std::endl;

	std::cout << "[ INFO ] " << std::endl;
	karen.complain("INFO");
	std::cout << std::endl;
	std::cout << "[ WARNING ]" << std::endl;
	karen.complain("WARNING");
	std::cout << std::endl;
	std::cout << "[ ERROR ]" << std::endl;
	karen.complain("ERROR");
	std::cout << std::endl << std::endl;
	std::cout << "---- [ INPUT ] ----" << std::endl;
	karen.complain(argv[1]);
	return (0);
}
