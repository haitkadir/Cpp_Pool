#ifndef __SCAVTRAP_H__
#define __SCAVTRAP_H__
#include "ClapTrap.hpp"


class ScavTrap : virtual public ClapTrap {
public:
    ScavTrap ();
    ScavTrap (std::string Name);
    ScavTrap (const ScavTrap &a);
    ScavTrap & operator = (const ScavTrap &a);

/*----------------------------------------------------------------------------*/
    void attack(const std::string& target);

/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
    void guardGate();

/*----------------------------------------------------------------------------*/
    virtual ~ScavTrap ();
};

#endif

