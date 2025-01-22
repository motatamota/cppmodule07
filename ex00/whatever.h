#ifndef F_H
# define F_H
# include <string>

template<typename T>
void	swap(T &a, T &b)
{
	T	c;

	c = a;
	a = b;
	b = c;
}

template<typename T>
T	min(T a, T b)
{
	if (a < b)
		return (a);
	return (b);
}

template<>
std::string	min(std::string a, std::string b)
{
	if (a.compare(b) < 0)
		return (a);
	return (b);
}

template<typename T>
T	max(T a, T b)
{
	if (a > b)
		return (a);
	return (b);
}

template<>
std::string	max(std::string a, std::string b)
{
	if (a.compare(b) > 0)
		return (a);
	return (b);
}

#endif
