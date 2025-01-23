#ifndef F_H
# define F_H

template<typename T>
void	iter(T *p, int size, void (*f)(T&))
{
	for (int n = 0; n < size; n++)
		f(p[n]);
}

#endif
