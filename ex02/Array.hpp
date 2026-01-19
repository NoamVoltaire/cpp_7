#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
private:
	unsigned int	_size;
	T			*_elem;
public:
	Array();
	Array(unsigned int n);
	Array(const Array &other);
	~Array();
	Array &operator=(const Array &other);
	T &operator[](const unsigned int index);
	const T &operator[](const unsigned int index)const;

	unsigned int	size() const;
};

#include "Array.tpp"

#endif
