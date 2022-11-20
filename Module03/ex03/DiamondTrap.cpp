/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haitkadi <haitkadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 10:54:37 by haitkadi          #+#    #+#             */
/*   Updated: 2022/11/20 15:23:42 by haitkadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
DiamondTrap::DiamondTrap ()
{
    std::cout << "DiamondTrap: Default constructor called!" << std::endl;
    this->m_name = "";
    this->FragTrap::m_HitPoints = 100;
    this->ScavTrap::m_EnergyPoints = 50;
    this->FragTrap::m_AttackDamage = 30;
}

/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
DiamondTrap::DiamondTrap (const std::string& name) : ClapTrap(name + "_clap_name")
{
    std::cout << "DiamondTrap: Name constructor called!" << std::endl;
    this->m_name = name;
    this->FragTrap::m_HitPoints = 100;
    this->ScavTrap::m_EnergyPoints = 50;
    this->FragTrap::m_AttackDamage = 30;
}

/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
DiamondTrap::DiamondTrap (const DiamondTrap &a){
    std::cout << "DiamondTrap: Copy constructor called!" << std::endl;
    this->m_name = a.m_name;
    this->FragTrap::m_HitPoints = a.FragTrap::m_HitPoints;
    this->ScavTrap::m_EnergyPoints = a.ScavTrap::m_EnergyPoints;
    this->FragTrap::m_AttackDamage = a.FragTrap::m_AttackDamage;
}

/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
DiamondTrap & DiamondTrap::operator = (const DiamondTrap &a){
    if (this != &a){
        std::cout << "DiamondTrap: Copy assignment operator called!" << std::endl;
        this->m_name = a.m_name;
        this->FragTrap::m_HitPoints = a.FragTrap::m_HitPoints;
        this->ScavTrap::m_EnergyPoints = a.ScavTrap::m_EnergyPoints;
        this->FragTrap::m_AttackDamage = a.FragTrap::m_AttackDamage;
    }
    return(*this);
}

/*----------------------------------------------------------------------------*/
DiamondTrap::~DiamondTrap (){
    std::cout << "DiamondTrap: destroyed" << std::endl;
}



/*----------------------------------------------------------------------------*/
void DiamondTrap::attack(const std::string& target){
    ScavTrap::attack(target);
}

/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
void DiamondTrap::whoAmI(){
    std::cout << "DiamondTrap: " << this->m_name << " " << ClapTrap::m_name << std::endl;
}

