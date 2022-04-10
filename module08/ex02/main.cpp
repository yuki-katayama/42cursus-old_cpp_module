#include "mutantstack.hpp"
#include "test.hpp"
#include <iostream>

void iteratorTest(MutantStack<int> mstack)
{
	std::cout << "----- iterator test -----" << std::endl;
	std::cout << *mstack.begin() << std::endl;
	std::cout << *mstack.end() << std::endl;
}

void stackTest(MutantStack<int> mstack)
{
	std::cout << "----- stack test -----" << std::endl;
	std::cout << mstack.top() << std::endl;
	std::cout << mstack.size() << std::endl;
}

void printTitle(std::string title)
{
	std::cout << "\n" << title << std::endl;
}

void subjectTest(void)
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
}

void originalTest(void)
{
	MutantStack<int> mstack;
	for (size_t i = 0; i < 10; i++)
	{
		mstack.push(i);
	}
	const MutantStack<int> cmstack = mstack;
	printTitle("\niterator: ");
	test::itTest(mstack.begin(), mstack.end());
	printTitle("\nreverse-iterator: ");
	test::itTest(mstack.rbegin(), mstack.rend());
	printTitle("\nconst reverse-iterator: ");
	test::itTest(cmstack.begin(), cmstack.end());
	printTitle("\nconst reverse-iterator: ");
	test::itTest(cmstack.rbegin(), cmstack.rend());
}

int main(void)
{
	printTitle("---- Subject Test -----");
	subjectTest();
	printTitle("---- Original Test -----");
	originalTest();
	return 0;
}
