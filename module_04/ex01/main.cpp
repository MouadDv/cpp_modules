#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
  {
    Animal *j[10];

    for (int i = 0; i < 10; i++) {
      std::cout << "Animal nbr " << i + 1 << " allocated!\n";
      std::cout << "-------------------------------------\n";
      if (i % 2 == 0)
        j[i] = new Dog;
      else
        j[i] = new Cat;
      j[i]->makeSound();
      std::cout << "-------------------------------------\n";
    }


    for (int i = 0; i < 10; i++) {
      std::cout << "-------------------------------------\n";
      delete j[i];
      std::cout << "-------------------------------------\n";
    }
  }
  std::cout << "-------------------------------------\n";
  {
    std::cout << "- Deep copy check for Dog class using assignation operator! -\n\n";
    Dog *j = new Dog;
    Dog *l = new Dog;

    *l = *j;
    delete l;
    delete j;
  }
  std::cout << "-------------------------------------\n";
  {
    std::cout << "- Deep copy check for cat class using assignation operator! -\n\n";
    Cat *j = new Cat;
    Cat *l = new Cat;

    *l = *j;
    delete l;
    delete j;
  }
  std::cout << "-------------------------------------\n";
  std::cout << "-------------------------------------\n";
  {
    std::cout << "- Deep copy check for Dog class using copy constructor! -\n\n";
    Dog *j = new Dog;
    Dog *l = new Dog(*j);

    delete l;
    delete j;
  }
  std::cout << "-------------------------------------\n";
  {
    std::cout << "- Deep copy check for cat class using copy constructor! -\n\n";
    Cat *j = new Cat;
    Cat *l = new Cat(*j);

    delete l;
    delete j;
  }
  std::cout << "-------------------------------------\n";
}
