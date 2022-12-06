#include "Span.hpp"
#include <iostream>

using std::endl;
using std::cout;
int	main(void)
{
	Span	sp = Span(5);
	sp.addNumber(1);
	sp.addNumber(2);
	sp.addNumber(3);

	for (int i = 0; i < 3; i++)
	{
		sp.getNum(i);
	}
}