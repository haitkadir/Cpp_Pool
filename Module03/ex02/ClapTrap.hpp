/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haitkadi <haitkadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 01:36:00 by haitkadi          #+#    #+#             */
/*   Updated: 2022/11/18 03:54:48 by haitkadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CLAPTRAP_H__
#define __CLAPTRAP_H__
#include <iostream>

class ClapTrap{
protected:
    std::string m_name;
    int m_HitPoints;
    int m_EnergyPoints;
    int m_AttackDamage;
public:
    ClapTrap ();
    ClapTrap (std::string Name);
    ClapTrap (const ClapTrap &a);
    ClapTrap & operator = (const ClapTrap &a);

/*----------------------------------------------------------------------------*/
    void attack(const std::string& target);
    
/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
    void takeDamage(unsigned int amount);
    
/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
    void beRepaired(unsigned int amount);

/*----------------------------------------------------------------------------*/
    ~ClapTrap ();
};

#endif

