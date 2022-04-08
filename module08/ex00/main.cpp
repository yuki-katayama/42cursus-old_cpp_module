#include "easyfind.hpp"
#include "test.hpp"

void printString(std::string str) {
	std::cout << "------ " << str << " -----" << std::endl;
}

int main(void)
{
	std::vector<int> vec1(4,4);
	std::vector<int> vec2;
	const std::vector<int> &constVec1 = vec1;
	const std::vector<int> &constVec2 = vec2;
	// const std::vector<int>::const_iterator itr = vec.begin();

	printString("vecter ");
	test::vectorTest(vec1, 4);
	test::vectorTest(vec2, 4);
	test::vectorTest(vec1, 3);

	printString("const vecter ");
	test::vectorTest(constVec1, 4);
	test::vectorTest(constVec2, 4);
	test::vectorTest(constVec1, 3);



	return (0);
}
