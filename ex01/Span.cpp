#include "Span.hpp"
#include <iostream>
#include <iterator>
using std::cout;
using std::endl;
using std::iterator;

Span::Span()
{
	cout << "Span constructor called" << endl;
	this->arr = new int[0];
	this->size = 0;
}

Span::Span(unsigned int n)
{
	cout << "Span constructor called" << endl;
	this->arr = new int[n];
	this->size = n;
}

Span::~Span()
{
	cout << "Span destructor called" << endl;
	delete this->arr;
}

unsigned int	Span::getSize(void) const
{
	return(this->size);
}
int		Span::getNum(int i) const
{
	return(this->arr[i]);
}

Span::Span(Span const &a)
{
	this->size = a.getSize();
	this->arr = new int[this->size];
	for (int i = 0; i < this->size; i++)
		this->arr[i] = a.getNum(i);
}

Span	&Span::operator=(Span &a)
{
	this->size = a.getSize();
	this->arr = new int[this->size];
	for (int i = 0; i < this->size; i++)
		this->arr[i] = a.getNum(i);
	return (*this);
}

void	Span::addNumber(int	i)
{
	*this->arr = i;
	this->arr++;
}