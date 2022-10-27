/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haitkadi <haitkadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 12:56:11 by haitkadi          #+#    #+#             */
/*   Updated: 2022/10/26 12:56:12 by haitkadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie* newZombie(std::string name){
    Zombie  *newZomb;

    newZomb = new(std::nothrow) Zombie(name);
    if (!newZomb)
        exit(EXIT_FAILURE);
    return newZomb;
}