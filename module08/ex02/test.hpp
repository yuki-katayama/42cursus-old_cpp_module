#ifndef TEST_HPP
#define TEST_HPP

#include <iostream>

namespace test {
	template< class T >
	void itTest(T begin, T end) {
		for (T it = begin; it != end; it++) {
			std::cout << *it << ", ";
		}
		std::cout << std::endl;
	}
}

#endif
