#include "ClapTrap.hpp"

int main()
{
    ClapTrap player1("Akira");
    ClapTrap player2("Skywalka!");
    player1.attack("Skywalka!");
    player1.takeDamage(100);
    player2.takeDamage(10);
    player2.beRepaired(500);
    std::cout << "hp " << player2.get_hitpoint() << std::endl;

    ClapTrap player3(player2);
    std::cout << "hp " << player3.get_hitpoint() << std::endl;
}
