
#include "FragTrap.hpp"

int main(void){
    FragTrap hssain("Hssain");
    FragTrap enemy("Enemy");

    hssain.attack("Enemy");
    enemy.takeDamage(31);
    hssain.attack("Enemy");
    enemy.takeDamage(32);


    enemy.beRepaired(100);

    enemy.attack("Hssain");
    hssain.takeDamage(31);
    enemy.attack("Hssain");
    hssain.takeDamage(32);
    enemy.attack("Hssain");
    hssain.takeDamage(33);
    enemy.attack("Hssain");
    hssain.takeDamage(44);

    enemy.highFivesGuys();



    return 0;
}

