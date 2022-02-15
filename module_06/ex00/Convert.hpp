#pragma once
#ifndef CONVERT_CLASS
#define CONVERT_CLASS

#include <string>
#include <iostream>
#include <iomanip>

class Convert
{
private:
	std::string str;
	char charret(int s);
	
	void Toint( void );
	void Tochar( void );
	void Tofloat( void );
	void Todouble( void );
	bool is_float( void );
	bool is_point( void );
public:
	Convert( void );
	Convert( char *s );
	Convert( const Convert &c );
	void convert( void );
	Convert &operator=( const Convert &c );
	~Convert( void );
};

#endif