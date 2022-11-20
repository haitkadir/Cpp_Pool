#include "ScavTrap.hpp"

int main(void){
    ScavTrap hssain("Hssain");
    ScavTrap enemy("Enemy");

    enemy.attack("Hssain");
    hssain.takeDamage(20);
    enemy.attack("Hssain");
    hssain.takeDamage(20);
    enemy.attack("Hssain");
    hssain.takeDamage(20);
    enemy.attack("Hssain");
    hssain.takeDamage(20);

    enemy.beRepaired(6);

    hssain.attack("Enemy");
    enemy.takeDamage(20);
    hssain.attack("Enemy");
    enemy.takeDamage(20);

    hssain.guardGate();

    return 0;
}

