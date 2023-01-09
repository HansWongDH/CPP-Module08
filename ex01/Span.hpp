#include <exception>
#include <iostream>
#include <vector>
using std::exception;
using std::vector;
class Span
{
	private:
		vector<int>	vec;
		int	_index;
		unsigned int	size;
	public:
		Span();
		Span(unsigned int n);
		Span(Span const &a);
		Span &operator=(Span const &a);
		~Span();
		void	addNumber(int i);
		unsigned int	getSize(void) const;
		int	getNum(int i) const;
		int	shortestSpan(void);
		int	longestSpan(void);
		class outOfBound : public exception
		{	
			const char* what() const throw();
		};
		class noSpanFound: public exception
		{	
			const char* what() const throw();
		};
};
