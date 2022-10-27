/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haitkadi <haitkadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 10:58:42 by haitkadi          #+#    #+#             */
/*   Updated: 2022/10/27 10:58:43 by haitkadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"



HumanA::HumanA(std::string Name, Weapon &theWeapon) : weapon(theWeapon)
{
    this->name = Name;
}

void    HumanA::attack(){
    std::cout << this->name
    << " attacks with their "
    << this->weapon.getType()
    << std::endl;
}


