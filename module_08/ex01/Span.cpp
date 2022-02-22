#include "Span.hpp"

Span::Span(void)
{
	std::cout << "Span default constructor called!\n";
	this->size = 0;
	this->i = 0;
}

Span::Span(unsigned int N)
{
	std::cout << "Span constructor called with value " << N << "\n";
	this->size = N;
	this->i = 0;
}

Span::Span(const Span &c)
{
	std::cout << "Span copy constructor called!\n";
	this->size = c.size;
	this->vec = c.vec;
	this->i = 0;
}

Span &Span::operator=(const Span &c)
{
	std::cout << "Span assignation operator called!\n";
	this->size = c.size;
	this->vec = c.vec;
	this->i = c.i;
	return (*this);
}

Span::~Span()
{
	std::cout << "Span destructor called!\n";
}

void Span::addNumber(int a)
{
	if (this->i < this->size)
	{
		this->vec.push_back(a);
		this->i++;
	}
	else
		throw Span::FE();
}

int Span::shortestSpan( void )
{
	int ret = INT32_MAX;
	std::vector<int>::iterator it = this->vec.begin();
	std::vector<int>::iterator it2 = this->vec.begin();
	it2++;

	if (this->i <= 1)
		throw Span::NOSPANCANBEFOUND();
	while (it2 != this->vec.end())
	{
		if (std::abs(*it - *it2) < ret)
			ret = std::abs(*it - *it2);
		it2++;
		it++;
	}
	return (ret);
}

int Span::longestSpan( void )
{
	int ret = INT32_MIN;
	std::vector<int>::iterator it = this->vec.begin();
	std::vector<int>::iterator it2 = this->vec.begin();
	it2++;

	if (this->i <= 1)
		throw Span::NOSPANCANBEFOUND();
	while (it2 != this->vec.end())
	{
		if (std::abs(*it - *it2) > ret)
			ret = std::abs(*it - *it2);
		it2++;
		it++;
	}
	return (ret);
}

void Span::addRange(std::vector<int>::iterator it, std::vector<int>::iterator it2)
{
	while (it != it2)
	{
		this->addNumber(*it);
		it++;
	}
}

const char* Span::FE::what() const throw()
{
	return ("Span already full!");
}

const char* Span::NOSPANCANBEFOUND::what() const throw()
{
	return ("No span can be found!");
}