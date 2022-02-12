#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	Animal *j = new Cat;
	j->makeSound();
	delete j;

/*
  	Animal j;

 	j.makeSound();

*/

}
