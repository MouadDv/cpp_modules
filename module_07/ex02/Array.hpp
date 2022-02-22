#pragma once
#ifndef ARRAY_CLASS
#define ARRAY_CLASS

#include <iostream>

template <typename Y>
class Array{
private:
	Y *arr;
	unsigned int s;
public:
	Array( void )
	{
		std::cout << "Array default constructor called!\n";
		this->s = 0;
		this->arr = new Y[0]();
	}
	Array(unsigned int N)
	{
		std::cout << "Array constructor called with value : " << N << "\n";
		this->arr = new Y[N]();
		this->s = N;
	}
	Array(const Array &c)
	{
		std::cout << "Array copy constructor called!\n";
		this->s = c.s;
		this->arr = new Y[this->s]();
		for (size_t i = 0; i < this->s; i++)
			this->arr[i] = c.arr[i];
	}
	Array &operator=(const Array &c)
	{
		std::cout << "Array assignation operator called\n";
		this->s = c.s;
		this->arr = new Y[this->s]();
		for (size_t i = 0; i < this->s; i++)
			this->arr[i] = c.arr[i];
		return (*this);
	}
	~Array()
	{
		std::cout << "Array destructor called\n";
		delete this->arr;
	}
	class SSE: public std::exception
	{
		const char * what () const throw ()
		{
			return ("Index out of range");
		}
	};
	unsigned int size()
	{
		return (this->s);
	}
	Y &operator[](unsigned int i)
	{
		if (i >= this->s)
			throw SSE();
		return (this->arr[i]);
	}
};


#endif