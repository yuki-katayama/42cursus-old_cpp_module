#include "Karen.hpp"

int main(int argc, char *argv[])
{

	if (argc != 2)
	{
		std::cout << "Error: Wrong number of arguments" << std::endl;
		return (1);
	}
	Karen karen(argv[1]);
	karen.complain(karen.getLevel());
	return (0);
}
