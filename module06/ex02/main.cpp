#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <exception>
#include <cstdlib>

Base::~Base(void) {}

void identify(Base &p)
{
	try
	{
		A &a = dynamic_cast<A &>(p);
		static_cast<void>(a);
		std::cout << "A" << std::endl;
	}
	catch (std::exception err) {}
	try
	{
		B &a = dynamic_cast<B &>(p);
		static_cast<void>(a);
		std::cout << "B" << std::endl;
	}
	catch (std::exception err) {}
	try
	{
		C &a = dynamic_cast<C &>(p);
		static_cast<void>(a);
		std::cout << "C" << std::endl;
	}
	catch (std::exception err) {}
}

void identify(Base *p)
{
	if(dynamic_cast<A *>(p))
	{
		std::cout << "A" << std::endl;
		return ;
	}
	if(dynamic_cast<B *>(p))
	{
		std::cout << "B" << std::endl;
		return ;
	}
	if(dynamic_cast<C *>(p))
	{
		std::cout << "C" << std::endl;
		return ;
	}
}

Base * generate(void)
{
	srand(time(NULL));

    Base *generated = NULL;
    switch (rand() % 3) {
        case 0:
            generated = new A();
            std::cout << "generated: A" << std::endl;
            break;
        case 1:
            generated = new B();
            std::cout << "generated: B" << std::endl;;
            break;
        case 2:
            generated = new C();
			std::cout << "generated: C" << std::endl;;
            break;
    }
    return generated;
}

int		main(void)
{
	Base *p = generate();
	std::cout << "reference" << std::endl;
	identify(*p);
	std::cout << "\npointer" << std::endl;
	identify(p);
	return (0);
}
