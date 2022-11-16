#include "ClapTrap.hpp"

int main(void){
    ClapTrap hssain("Hssain");
    ClapTrap enemy("Enemy");

    enemy.attack("Hssain");
    hssain.takeDamage(1);
    enemy.attack("Hssain");
    hssain.takeDamage(2);
    enemy.attack("Hssain");
    hssain.takeDamage(3);
    enemy.attack("Hssain");
    hssain.takeDamage(4);
    //hssain tried to attack back
    hssain.attack("Enemy");

    hssain.beRepaired(6);

    hssain.attack("Enemy");
    enemy.takeDamage(1);
    hssain.attack("Enemy");
    enemy.takeDamage(2);
    hssain.attack("Enemy");
    enemy.takeDamage(3);
    hssain.attack("Enemy");
    enemy.takeDamage(4);

    return 0;
}

