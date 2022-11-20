
#include "FragTrap.hpp"

int main(void){
    FragTrap hssain("Hssain");
    FragTrap enemy("Enemy");

    hssain.attack("Enemy");
    enemy.takeDamage(30);
    hssain.attack("Enemy");
    enemy.takeDamage(30);


    enemy.beRepaired(100);

    enemy.attack("Hssain");
    hssain.takeDamage(30);
    enemy.attack("Hssain");
    hssain.takeDamage(30);
    enemy.attack("Hssain");
    hssain.takeDamage(30);
    enemy.attack("Hssain");
    hssain.takeDamage(30);

    enemy.highFivesGuys();



    return 0;
}

