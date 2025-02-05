#ifndef AR_H
# define AR_H
# include <ctime>
# include <cstddef>
# include <cstdlib>
# include <exception>

template<typename T>
class Array
{
private:
	T				*arr_;
	unsigned int	size_;

public:
	Array();
	Array(unsigned int n);
	Array(const Array &other);
	Array &operator=(const Array &other);
	~Array();
	unsigned int	size() const;
	T	&operator[](unsigned int index);
	const T	&operator[](unsigned int index) const;
	class OutOfRangeException : public std::exception
	{
			const char *what() const throw();
	};
};

# include "Array.tpp"

#endif
