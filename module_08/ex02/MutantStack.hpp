#pragma once
#ifndef MUTANTSTACK_CLASS
#define MUTANTSTACK_CLASS

#include <stack>
#include <iostream>
#include <deque>

template <typename T, class Container = std::deque<T> >
class MutantStack: public std::stack<T>
{
public:
	typedef typename Container::iterator iterator;
	MutantStack( void );
	MutantStack( const MutantStack &c );
	MutantStack &operator=( const MutantStack &c );
	~MutantStack();

	iterator begin( void );
	iterator end( void );
};

template <typename T, typename C>
MutantStack<T, C>::MutantStack( void )
{
	std::cout << "MutantStack default constructor called!\n";
}
template <typename T, typename C>
MutantStack<T, C>::MutantStack( const MutantStack &c ): std::stack<T>(c)
{
	std::cout << "MutantStack copy constructor called!\n";
}

template <typename T, typename C>
MutantStack<T, C> &MutantStack<T, C>::operator=( const MutantStack<T, C> &c )
{
	std::cout << "MutantStack assigned operator called!\n";
	std::stack<T>::operator=(c);
	return (*this);
}

template <typename T, typename C>
MutantStack<T, C>::~MutantStack()
{
	std::cout << "MutantStack destructor called!\n";
}

template <typename T, typename C>
typename MutantStack<T, C>::iterator MutantStack<T, C>::begin( void )
{
	return (this->c.begin());
}

template <typename T, typename C>
typename MutantStack<T, C>::iterator MutantStack<T, C>::end( void )
{
	return (this->c.end());
}

#endif