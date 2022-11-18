#include "ScavTrap.hpp"

int main(void){
    ScavTrap hssain("Hssain");
    ScavTrap enemy("Enemy");

    enemy.attack("Hssain");
    hssain.takeDamage(21);
    enemy.attack("Hssain");
    hssain.takeDamage(22);
    enemy.attack("Hssain");
    hssain.takeDamage(23);
    enemy.attack("Hssain");
    hssain.takeDamage(24);

    enemy.beRepaired(6);

    hssain.attack("Enemy");
    enemy.takeDamage(21);
    hssain.attack("Enemy");
    enemy.takeDamage(22);

    hssain.guardGate();

    return 0;
}

