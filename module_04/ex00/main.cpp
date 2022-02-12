#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
  {
	std::cout << "-------------------------------------\n";
    const Animal* meta = new Animal();
	std::cout << "-------------------------------------\n";
    const Animal* j = new Dog();
	std::cout << "-------------------------------------\n";
    const Animal* i = new Cat();
	std::cout << "-------------------------------------\n";
    std::cout << "j type: " << j->getType() << std::endl;
    std::cout << "meta type: " << meta->getType() << std::endl;
    std::cout << "i type: " << i->getType() << std::endl;
	std::cout << "-------------------------------------\n";
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
	std::cout << "-------------------------------------\n";
	// delete meta;
	 delete j;
	// delete i;
	std::cout << "-------------------------------------\n";
  }
  std::cout << "\n\n\n";
  {
	std::cout << "-------------------------------------\n";
    const WrongAnimal* meta = new WrongAnimal();
    const WrongAnimal* j = new WrongCat();
	std::cout << "-------------------------------------\n";
    j->makeSound();
    meta->makeSound();
	std::cout << "-------------------------------------\n";
	delete meta;
	delete j;
	std::cout << "-------------------------------------\n";
  }
}
