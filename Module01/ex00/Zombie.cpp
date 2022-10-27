/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haitkadi <haitkadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 12:56:19 by haitkadi          #+#    #+#             */
/*   Updated: 2022/10/26 12:56:20 by haitkadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie::Zombie(std::string Name){
    this->name = Name;
}

void    Zombie::announce(void){
    std::cout << this->name
    << ": BraiiiiiiinnnzzzZ..."
    << std::endl;
}

Zombie::~Zombie(){
    std::cout << this->name
    << " Destroyed" << std::endl;
}