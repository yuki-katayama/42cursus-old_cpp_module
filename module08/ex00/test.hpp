#ifndef TEST_HPP
#define TEST_HPP

#include "easyfind.hpp"
#include "test.hpp"

namespace test {
	template <class T>
	void vectorTest(const T &container, int n) {
		typedef typename T::const_iterator Iter;
		try {
			std::cout << "contents   : ";
			if (container.empty()) {
				std::cout << "empty";
			} else {
				for (Iter i = container.begin(); i != container.end(); ++i) {
					std::cout << *i << ",";
				}
			}
			std::cout << std::endl;
			std::cout << "target   : " << n << std::endl;
  			std::cout << "result   : " << *easyfind(container, n) << std::endl << std::endl;
  		} catch (std::exception &e) {
			  std::cerr << e.what() << std::endl << std::endl;
  		}
	}
}

#endif
