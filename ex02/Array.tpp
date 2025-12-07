#include "Array.hpp"

template <typename T>
Array<T>::Array() : _size(0), _elem(NULL)
{
}

// here we do new T[](). "()"" is for default initializing of the elem

template <typename T>
Array<T>::Array(unsigned int n) : _size(n), _elem(new T[n]())
{
}

template <typename T>
Array<T>::~Array()
{
	delete[] this->_elem;
}
template <typename T>
Array<T>::Array(const Array &other) : _size(other._size)
{
	this->_elem = new T[_size]() ;
	for (unsigned int i = 0; i < _size ; i++)
		this->_elem[i] = other._elem[i];
}

template <typename T>
Array<T> &Array<T>::operator=(const Array &other)
{
	if (this != &other)
	{
		delete[] this->_elem;
		this->_size = other._size;
		this->_elem = new T[_size]();
		for (unsigned int i = 0; i < _size ; i++)
			this->_elem[i] = other._elem[i];
	}
	return(*this);
}

template <typename T>
T &Array<T>::operator[](unsigned int index)
{
	
	if (index >= this->_size)
		throw std::out_of_range("Index is out of bounds");
	else
	return (this->_elem[index]);
}

template <typename T>
const T &Array<T>::operator[](unsigned int index)const
{
	
	if (index >= this->_size)
		throw std::out_of_range("Index is out of bounds");
	else
	return (this->_elem[index]);
}


template <typename T>
unsigned int	Array<T>::size(void) const
{
	return(this->_size);
}