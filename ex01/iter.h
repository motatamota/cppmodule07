#ifndef F_H
# define F_H
#include <cstdlib>

template<typename T>
void	iter(T *p, std::size_t size, void (*f)(T&))
{
	for (std::size_t n = 0; n < size; n++)
		f(p[n]);
}

#endif
