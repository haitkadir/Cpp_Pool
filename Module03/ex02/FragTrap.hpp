#ifndef __FRAGTRAP_H__
#define __FRAGTRAP_H__
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
public:
    FragTrap ();
    FragTrap (std::string Name);
    FragTrap (const FragTrap &a);
    FragTrap & operator = (const FragTrap &a);

/*----------------------------------------------------------------------------*/
    void attack(const std::string& target);

/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
    void highFivesGuys(void);

/*----------------------------------------------------------------------------*/
    ~FragTrap ();
};

#endif

