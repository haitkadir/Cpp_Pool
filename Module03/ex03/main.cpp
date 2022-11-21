
#include "DiamondTrap.hpp"

int main(void){
    DiamondTrap first("Harry");
    DiamondTrap second("John");

    first.attack("John");
    second.takeDamage(30);
    first.attack("John");
    second.takeDamage(30);
    first.attack("John");
    second.takeDamage(30);
    // first.attack("John");
    // second.takeDamage(30);

    std::cout << std::endl;

    second.attack("Harry");
    second.beRepaired(100);
    second.attack("Harry");

    std::cout << std::endl;
    second.whoAmI();
    second = first;
    second.whoAmI();
    
    return 0;
}

