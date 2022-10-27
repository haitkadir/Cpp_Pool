/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haitkadi <haitkadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 10:59:47 by haitkadi          #+#    #+#             */
/*   Updated: 2022/10/27 10:59:48 by haitkadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"



HumanB::HumanB(std::string Name){
    this->name = Name;
    this->weapon = NULL;
}

void    HumanB::setWeapon(Weapon &theWeapon){
    this->weapon = &theWeapon;
}

void    HumanB::attack(){
    std::cout << this->name
    << " attacks with their "
    << this->weapon->getType()
    << std::endl;
}
