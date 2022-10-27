/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haitkadi <haitkadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 11:00:45 by haitkadi          #+#    #+#             */
/*   Updated: 2022/10/27 11:00:46 by haitkadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string Type){
    this->type = Type;
}

const std::string &Weapon::getType(){
    return this->type;
}

void    Weapon::setType(std::string Type){
    this->type = Type;
}
