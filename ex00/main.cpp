#include "easyfind.hpp"
#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;

int	main(void)
{
	vector<int> vect;

	vect.push_back(10);
	vect.push_back(20);
	vect.push_back(30);
	// for (vector<int>::iterator it = vect.begin(); it != vect.end(); it++)
	// {
	// 	cout << *it << endl;
	// }
	cout << easyfind< vector<int> >(vect, 30) << endl;
	cout << easyfind< vector<int> >(vect, 3) << endl;
}