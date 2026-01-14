#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>
#include <string.h>

template <typename T>
void	swap(T &a, T &b)
{
	T tmp;
	tmp = a;
	a = b;
	b = tmp;
};

template <typename T>
const T	&min(const T &a, const T &b)
{
	if (a < b)
		return (a);
	else
		return (b);
};

template <typename T>
const T	max(const T &a, const T &b)
{
	if (a > b)
		return (a);
	else
		return (b);
};


//did min and max for string literals ("str") not asked for but 
// can be done trough templates like below
// since "hello" and "hi" are actually diff types
// const char[6], const char[3]


template <size_t L1, size_t L2>
const char	(*min(const char (&a)[L1], const char (&b)[L2]))
{
	if(strcmp(a,b) < 0 && L1 < L2)
		return (a);
	else
		return (b);
};

// needed for same length string literal comparaison 

template <size_t L>
const char	(*min(const char (&a)[L], const char (&b)[L]))
{
	if (a < b)
		return (a);
	else
		return (b);
};

template <size_t L1, size_t L2>
const char	*max(const char (&a)[L1], const char (&b)[L2])
{
	if(strcmp(a,b) > 0 && L1 > L2)
		return (a);
	else
		return (b);
};

template <size_t L>
const char	(*max(const char (&a)[L], const char (&b)[L]))
{
	if (a > b)
		return (a);
	else
		return (b);
};
#endif
