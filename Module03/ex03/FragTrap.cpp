#include "FragTrap.hpp"

/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
FragTrap::FragTrap (){
    std::cout << "FragTrap: Default constructor called!" << std::endl;
    this->m_name = "";
    this->m_HitPoints = 100;
    this->m_EnergyPoints = 100;
    this->m_AttackDamage = 30;
}

/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
FragTrap::FragTrap (std::string name) {
    std::cout << "FragTrap: Name constructor called!" << std::endl;
    this->m_name = name;
    this->m_HitPoints = 100;
    this->m_EnergyPoints = 100;
    this->m_AttackDamage = 30;
}

/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
FragTrap::FragTrap (const FragTrap &a){
    std::cout << "FragTrap: Copy constructor called!" << std::endl;
    this->m_name = a.m_name;
    this->m_HitPoints = a.m_HitPoints;
    this->m_EnergyPoints = a.m_EnergyPoints;
    this->m_AttackDamage = a.m_AttackDamage;
}

/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
FragTrap & FragTrap::operator = (const FragTrap &a){
    if (this != &a){
        std::cout << "FragTrap: Copy assignment operator called!" << std::endl;
        this->m_name = a.m_name;
        this->m_HitPoints = a.m_HitPoints;
        this->m_EnergyPoints = a.m_EnergyPoints;
        this->m_AttackDamage = a.m_AttackDamage;
    }
    return(*this);
}

/*----------------------------------------------------------------------------*/
void FragTrap::attack(const std::string& target){
    if (this->m_HitPoints > 0 && this->m_EnergyPoints > 0){
        this->m_EnergyPoints--;
        std::cout << "FragTrap "
        << this->m_name << " Attacks ︻デ═一  - "
        << target << ", causing "
        << this->m_AttackDamage
        << " points of damage!"
        << std::endl;
    }
}

/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
void FragTrap::highFivesGuys(void){
    std::cout << "FragTrap: " << this->m_name << "  high fives request." << std::endl;
}

/*----------------------------------------------------------------------------*/
FragTrap::~FragTrap (){
    std::cout << "FragTrap: destroyed" << std::endl;
}

