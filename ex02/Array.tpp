template <typename T>
Array<T>::Array() : arr_(0), size_(0)
{
}

template <typename T>
Array<T>::Array(unsigned int n) : arr_(new T[n]()), size_(n)
{
}

template <typename T>
Array<T>::Array(const Array &other) : arr_(0), size_(0)
{
	*this = other;
}

template <typename T>
Array<T> &Array<T>::operator=(const Array<T> &other)
{
	if (this != &other)
	{
		delete[] arr_;
		arr_ = new T[other.size_]();
		size_ = other.size_;
		for (unsigned int n = 0; n < other.size_; n++)
			arr_[n] = other.arr_[n];
	}
	return (*this);
}

template <typename T>
Array<T>::~Array()
{
	delete[] arr_;
}

template <typename T>
unsigned int	Array<T>::size() const
{
	return (size_);
}

template <typename T>
T	&Array<T>::operator[](unsigned int index)
{
	if (index >= size_)
		throw (std::exception());
	return (arr_[index]);
}
