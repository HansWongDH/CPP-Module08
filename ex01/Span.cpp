#include "Span.hpp"
#include <iostream>
#include <algorithm>
#include <iterator>
using std::cout;
using std::endl;
using std::sort;

Span::Span()
{
	cout << "Span defaultconstructor called" << endl;
	this->vec = vector<int>();
	this->size = 0;
	this->_index = 0;
}

Span::Span(unsigned int n)
{
	cout << "Span constructor called" << endl;
	this->vec = vector<int>(n, 0);
	this->size = n;
	this->_index = 0;
}

Span::~Span()
{
	cout << "Span destructor called" << endl;
}

unsigned int	Span::getSize(void) const
{
	return(this->size);
}
int		Span::getNum(int i) const
{
	return(this->vec[i]);
}

Span::Span(Span const &a)
{
	this->size = a.getSize();
	this->vec = a.vec;
	for (int i = 0; i < this->size; i++)
		this->vec[i] = a.getNum(i);
		cout << "Span copy constructor called" << endl;
}

Span&	Span::operator=(Span const &a)
{
	cout << "Span assignment called" << endl;
	this->size = a.getSize();
	this->vec = a.vec;
	for (int i = 0; i < a.getSize(); i++)
		this->vec[i] = a.getNum(i);
	return (*this);
}

const char*	Span::outOfBound::what() const throw()
{
	return("Span::Out of bound");
}
void	Span::addNumber(int	i)
{
	if (this->_index >= this->size)
		throw outOfBound();
	this->vec[this->_index] = i;
	this->_index++;
}

int	find_span(int i, int j)
{
	return std::abs(i - j);
}
int	Span::shortestSpan(void)
{
	if (this->getSize() <= 0)
		return (0);
	Span sp(*this);
	std::vector<int> spans(sp.getSize() - 1);
	sort(sp.vec.begin(), std::end(sp.vec));
	std::transform(sp.vec.begin(), sp.vec.end() - 1, sp.vec.begin() + 1, spans.begin(),find_span); // iterator through the vector, apply find_span and store the value into the vector spans
	return *std::min_element(spans.begin(), spans.end());
}

int	Span::longestSpan(void)
{
	if (this->getSize() <= 0)
		return (0);
	return (*std::max_element(this->vec.begin(), this->vec.end()) - *std::min_element(this->vec.begin(), this->vec.end()));
}