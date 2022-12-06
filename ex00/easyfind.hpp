#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <iostream>
#include <iterator>
#include <algorithm>

using std::exception;
using std::find;

class noOccuranceFound : public exception
{	
	const char* what() const throw();
};

const char*	noOccuranceFound::what() const throw()
{
	return("Easyfind::No Occurance found");
}

template <typename T>
int	easyfind(T container, int n)
{
	typename T::iterator it;

	it = find(container.begin(), container.end(), n);
	if (it == container.end())
		throw noOccuranceFound();
	return(*it);
};
#endif