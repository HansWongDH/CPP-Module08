#include "Span.hpp"
#include <iostream>

using std::endl;
using std::cout;
int	main(void)
{
	Span	sp(5);
	sp.addNumber(5);
	sp.addNumber(4);
	sp.addNumber(3);
	sp.addNumber(2);
	sp.addNumber(15);

	Span splol;
	cout << "longest span \n" << sp.longestSpan() << endl;
	cout << "shortest span \n" << sp.shortestSpan() << endl;
		cout << "shortest span \n" << splol.shortestSpan() << endl;
	for (int i = 0; i < sp.getSize(); i++)
	{
		cout << sp.getNum(i) << endl;
	}

}