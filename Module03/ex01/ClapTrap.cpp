/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haitkadi <haitkadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 22:00:38 by haitkadi          #+#    #+#             */
/*   Updated: 2022/11/16 06:13:20 by haitkadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
ClapTrap::ClapTrap (){
    std::cout << "Default constructor called!" << std::endl;
    this->m_name = "";
    this->m_HitPoints = 0;
    this->m_EnergyPoints = 0;
    this->m_AttackDamage = 0;
}

/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
ClapTrap::ClapTrap (std::string name){
    std::cout << "Name constructor called!" << std::endl;
    this->m_name = name;
    this->m_HitPoints = 10;
    this->m_EnergyPoints = 10;
    this->m_AttackDamage = 0;
}

/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
ClapTrap::ClapTrap (const ClapTrap &a){
    std::cout << "Copy constructor called!" << std::endl;
    this->m_name = a.m_name;
    this->m_HitPoints = a.m_HitPoints;
    this->m_EnergyPoints = a.m_EnergyPoints;
    this->m_AttackDamage = a.m_AttackDamage;
}

/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
ClapTrap & ClapTrap::operator = (const ClapTrap &a){
    if (this != &a){
        std::cout << "Copy assignment operator called!" << std::endl;
        this->m_name = a.m_name;
        this->m_HitPoints = a.m_HitPoints;
        this->m_EnergyPoints = a.m_EnergyPoints;
        this->m_AttackDamage = a.m_AttackDamage;
    }
    return(*this);
}
/*----------------------------------------------------------------------------*/
void ClapTrap::attack(const std::string& target){
    if (this->m_HitPoints && this->m_EnergyPoints){
        this->m_EnergyPoints--;
        this->m_AttackDamage++;
        std::cout << "ClapTrap "
        << this->m_name << " Attacks ︻デ═一  - "
        << target << ", causing "
        << this->m_AttackDamage
        << " points of damage!"
        << std::endl;
    }
}
    
/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
void ClapTrap::takeDamage(unsigned int amount){
    std::cout << this->m_name << " has taken " << amount << " point of damage!" << std::endl;
    if (this->m_HitPoints && (unsigned int)this->m_HitPoints > amount)
        this->m_HitPoints -= amount;
    else
        this->m_HitPoints = 0;
}
    
/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
void ClapTrap::beRepaired(unsigned int amount){
    if (this->m_EnergyPoints){
        if (this->m_EnergyPoints)
            this->m_EnergyPoints--;
        if ((this->m_HitPoints + amount) < INT_MAX)
            this->m_HitPoints += amount;
        else
            this->m_HitPoints = INT_MAX;
            
        std::cout << this->m_name << " has repaired itself with "
        << amount << " of Health points!" << std::endl;
    }
}
/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
ClapTrap::~ClapTrap (){
    std::cout << "Object destroyed" << std::endl;
}


