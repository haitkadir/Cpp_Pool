/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haitkadi <haitkadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 03:11:21 by haitkadi          #+#    #+#             */
/*   Updated: 2022/11/20 15:45:37 by haitkadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
ScavTrap::ScavTrap (){
    std::cout << "ScavTrap: Default constructor called!" << std::endl;
    this->m_name = "";
    this->m_HitPoints = 100;
    this->m_EnergyPoints = 50;
    this->m_AttackDamage = 20;
}

/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
ScavTrap::ScavTrap (std::string name) {
    std::cout << "ScavTrap: Name constructor called!" << std::endl;
    this->m_name = name;
    this->m_HitPoints = 100;
    this->m_EnergyPoints = 50;
    this->m_AttackDamage = 20;
}

/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
ScavTrap::ScavTrap (const ScavTrap &a){
    std::cout << "ScavTrap: Copy constructor called!" << std::endl;
    this->m_name = a.m_name;
    this->m_HitPoints = a.m_HitPoints;
    this->m_EnergyPoints = a.m_EnergyPoints;
    this->m_AttackDamage = a.m_AttackDamage;
}

/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
ScavTrap & ScavTrap::operator = (const ScavTrap &a){
    if (this != &a){
        std::cout << "ScavTrap: Copy assignment operator called!" << std::endl;
        this->m_name = a.m_name;
        this->m_HitPoints = a.m_HitPoints;
        this->m_EnergyPoints = a.m_EnergyPoints;
        this->m_AttackDamage = a.m_AttackDamage;
    }
    return(*this);
}

/*----------------------------------------------------------------------------*/
void ScavTrap::attack(const std::string& target){
    if (this->m_HitPoints > 0 && this->m_EnergyPoints > 0){
        this->m_EnergyPoints--;
        std::cout << "ScavTrap "
        << this->m_name << " Attacks ︻デ═一  - "
        << target << ", causing "
        << this->m_AttackDamage
        << " points of damage!"
        << std::endl;
    }
}

/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
void ScavTrap::guardGate(){
    std::cout << "ScavTrap: " << this->m_name << " is now in Gatekeeper mode." << std::endl;
}

/*----------------------------------------------------------------------------*/
ScavTrap::~ScavTrap (){
    std::cout << "ScavTrap: destroyed" << std::endl;
}


