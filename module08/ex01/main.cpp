#include "span.hpp"

void display(std::string const &name, Span &span)
{
	std::cout << "-----" << name << "-----\nShortest: " << span.shortestSpan() << ", Longest: " << span.longestSpan() << std::endl;
}

int main()
{
	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	display("-----Simple case-----", sp);

	Span cpy = Span(sp);
	display("-----Copy Constructor case-----", cpy);

	cpy.reset(5);
	cpy = sp;
	display("-----= operator case-----", cpy);

	cpy.reset(50);
	for (int i = -50; i < 0; i++) {
		cpy.addNumber(i);
	}
	display("----- minus value case", cpy);

	cpy.reset(5);
	std::cout << "-----Too Few Values case-----" << std::endl;
	try
	{
		cpy.shortestSpan();
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	cpy = sp;
	std::cout << "-----Too Many Amount case-----" << std::endl;
	try
	{
		cpy.addNumber(20);
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
