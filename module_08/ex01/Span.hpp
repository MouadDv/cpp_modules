#pragma once
#ifndef SPAN_CLASS
#define SPAN_CLASS

#include <vector>
#include <iostream>
#include <cmath>

class Span
{
private:
	std::vector<int> vec;
	unsigned int i;
	unsigned int size;
public:
	Span(void);
	Span(unsigned int N);
	Span(const Span &c);
	Span &operator=(const Span &c);
	~Span();

	class FE: public std::exception
	{
		const char* what() const throw();
	};
	class NOSPANCANBEFOUND: public std::exception
	{
		const char* what() const throw();
	};
	void addNumber(int a);
	int shortestSpan( void );
	int longestSpan( void );
	void addRange(std::vector<int>::iterator it, std::vector<int>::iterator it2);
};
 



#endif