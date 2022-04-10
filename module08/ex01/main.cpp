#include "span.hpp"

void subjectTest()
{
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}

void display(std::string const &name, Span &span)
{
	std::cout << "-----" << name << "-----\nShortest: " << span.shortestSpan() << ", Longest: " << span.longestSpan() << std::endl;
}

void exceptionTest() {
	Span sp = Span(1);
	sp.addNumber(6);
	std::cout << "-----Too Few Values case-----" << std::endl;
	try
	{
		sp.shortestSpan();
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "-----Too Many Amount case-----" << std::endl;
	try
	{
		sp.addNumber(20);
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void duplicateTest() {
	Span sp = Span(50);
	for (int i = -50; i < 0; i++)
	{
		sp.addNumber(i);
	}
	Span dup = Span(sp);
	sp.reset(0);
	display("duplicate", dup);
}

void iteratorTest() {
	Span sp = Span(2);
	std::vector<int> v;
	v.push_back(0);
	v.push_back(50);
	sp.addNumber(v.begin(), v.end());
	display("iterator", sp);
}

void originalTest() {
	exceptionTest();
	duplicateTest();
	iteratorTest();
}

int main()
{
	subjectTest();
	originalTest();
}
