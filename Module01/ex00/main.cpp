/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haitkadi <haitkadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 12:55:45 by haitkadi          #+#    #+#             */
/*   Updated: 2022/11/03 14:28:41 by haitkadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"



int main(void){
    Zombie  *zomb;

    zomb = newZombie("Huge");
    zomb->announce();
    randomChump("Danger");
    delete(zomb);
    return 0;
}