#pragma once
#ifndef EASYFIND_FUNC
#define EASYFIND_FUNC

#include <algorithm>

template <typename T>
typename T::iterator easyfind(T c, int n)
{
	typename T::iterator it;

	it = find(c.begin(), c.end(), n);
	if (it != c.end())
		return (it);
	else
		throw "Couldn't find";
}

#endif