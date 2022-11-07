/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haitkadi <haitkadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 14:57:06 by haitkadi          #+#    #+#             */
/*   Updated: 2022/11/03 14:30:02 by haitkadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"



int main(void){
    Zombie  *zombies;
    int zombieLen  = 10;

    zombies = zombieHorde(zombieLen, "Hssain");
    for (int i=0; i < zombieLen; i++){
        zombies[i].announce();
    }

    delete [] zombies;
    return 0;
}