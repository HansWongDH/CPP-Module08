#include <exception>

using std::exception;

class Span
{
	private:
		int	*arr;
		unsigned int	size;
	public:
		Span();
		Span(unsigned int n);
		Span(Span const &a);
		Span &operator=(Span &a);
		~Span();
		void	addNumber(int i);
		unsigned int	getSize(void) const;
		int	getNum(int i) const;
		class outOfSize : public exception
		{	
			const char* what() const throw();
		};
		class noSpanFound: public exception
		{	
			const char* what() const throw();
		};
};
