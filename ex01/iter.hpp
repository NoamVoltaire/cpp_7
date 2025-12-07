#ifndef ITER_HPP
#define ITER_HPP

#include <cstddef>
#include <iostream>

template <typename A, typename L>
void	iter(A *array, const L len, void (*f)(A &))
{
	size_t 	i = 0;
		
	while (array[i] && i < len)
	{
		f(array[i]);
		i++;
	}
}

template <typename E>
void	plus_one(E &elem)
{
	elem += 1;
};

template <typename E>
void	print_elems(E &elem)
{
	std::cout << elem << " ";

}
#endif
