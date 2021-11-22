#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T>
void	print(T &a)
{
	std::cout << a << std::endl;
}

template <typename T>
void	split(T &a)
{
	std::cout << a / 2 << std::endl;
}

template <typename T>
void iter(T *p, size_t len, void (*func)(T &))
{
	for (size_t i = 0; i < len; i++)
		func(p[i]);
}

#endif
