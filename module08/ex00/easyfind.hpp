#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>

#define FIND_VALUE 4

class NotFound : public std::exception
{
    virtual const char* what() const throw() { return ("\033[31m Not found.\033[m"); }
};

template <typename T>
typename T::iterator easyfind(T &container, int value) {
	typename T::iterator ret = std::find(container.begin(), container.end(), value);
	if (ret != container.end()) {
		return (ret);
	} else {
		throw NotFound();
	}

}

#endif
