#ifndef __DIAMONDTRAP_H__
#define __DIAMONDTRAP_H__
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap{
private:
    std::string m_name;
public:
    DiamondTrap ();
    DiamondTrap (const std::string& name);
    DiamondTrap (const DiamondTrap &a);
    ~DiamondTrap ();
    DiamondTrap & operator = (const DiamondTrap &a);
/*----------------------------------------------------------------------------*/
    void attack(const std::string& target);

/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
    void whoAmI();
};

#endif

