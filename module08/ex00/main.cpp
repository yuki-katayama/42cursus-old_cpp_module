#include "easyfind.hpp"

int main(void)
{
	std::vector<int> vec(3, 3);
	std::vector<int>::iterator itr = vec.begin();

	std::cout << "--------初期値-------" << std::endl;
	for (; itr != vec.end(); itr++) {
		std::cout << *itr << std::endl;
	}
	std::cout << "-------------------" << std::endl;
	try {
		itr = easyfind(vec, FIND_VALUE);
		std::cout << "found value in vector " << *itr << std::endl;
	} catch (std::exception &e) {
		std::cout << "Error : " << e.what() << std::endl;
	}
	return (0);
}
