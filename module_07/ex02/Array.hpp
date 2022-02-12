#pragma once
#ifndef ARRAY_CLASS
#define ARRAY_CLASS

#include <iostream>

template <typename Y>
class Array{
private:
	Y *arr;
	unsigned int size;
public:
	Array( void )
	{
		std::cout << "Array default constructor called!\n";
		this->size = 0;
	}
	Array(unsigned int N)
	{
		std::cout << "Array constructor called with value : " << N << "\n";
		this->arr = new Y[N]();
		this->size = N;
	}
	Array(const Array &c)
	{
		std::cout << "Array copy constructor called!\n";
		this->size = c.size;
		this->arr = new Y[this->size]();
		for (size_t i = 0; i < this->size; i++)
			this->arr[i] = c.arr[i];
	}
	Array &operator=(const Array &c)
	{
		std::cout << "Array assignation operator called\n";
		this->size = c.size;
		this->arr = new Y[this->size]();
		for (size_t i = 0; i < this->size; i++)
			this->arr[i] = c.arr[i];
		return (*this);
	}
	~Array()
	{
		std::cout << "Array destructor called\n";
	}
	class SSE: public std::exception
	{
		const char * what () const throw ()
		{
			return ("Index out of range");
		}
	};
	Y &operator[](unsigned int i)
	{
		if (i >= this->size)
			throw SSE();
		return (this->arr[i]);
	}
};


#endif