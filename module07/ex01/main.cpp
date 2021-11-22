#include "iter.hpp"

int main(void)
{
	char chars[] = {'a', 'b', 'c'};
	int nums[] = {1, 2, 3};
	std::cout << "------ chars --------" << std::endl;
 	std::cout << "・print" << std::endl;
	::iter(chars, 3, print);
 	std::cout << "\n・split" << std::endl;
	::iter(chars, 3, split);
	std::cout << "------ nums --------" << std::endl;
 	std::cout << "・print" << std::endl;
	::iter(nums, 3, print);
 	std::cout << "\n・split" << std::endl;
	::iter(nums, 3, split);
	return (0);
}
