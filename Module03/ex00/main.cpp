#include "ClapTrap.hpp"

int main(void){
    ClapTrap hssain("Hssain");
    ClapTrap enemy("Enemy");

    enemy.attack("Hssain");
    hssain.takeDamage(0);
    enemy.attack("Hssain");
    hssain.takeDamage(0);
    enemy.attack("Hssain");
    hssain.takeDamage(0);
    enemy.attack("Hssain");
    hssain.takeDamage(0);
    //hssain tried to attack back
    hssain.attack("Enemy");

    hssain.beRepaired(6);

    hssain.attack("Enemy");
    enemy.takeDamage(0);
    hssain.attack("Enemy");
    enemy.takeDamage(0);
    hssain.attack("Enemy");
    enemy.takeDamage(0);
    hssain.attack("Enemy");
    enemy.takeDamage(0);

    return 0;
}

