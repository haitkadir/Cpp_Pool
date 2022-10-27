/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haitkadi <haitkadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 14:57:27 by haitkadi          #+#    #+#             */
/*   Updated: 2022/10/26 14:57:28 by haitkadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


void    Zombie::setName(std::string Name)
{
    this->name = Name;
}

void    Zombie::announce(void){
    std::cout << this->name
    << ": BraiiiiiiinnnzzzZ..."
    << std::endl;
}

Zombie::~Zombie()
{
    std::cout << this->name
    << " Has destroyed"
    << std::endl;
}
