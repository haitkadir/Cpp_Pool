/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haitkadi <haitkadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 14:57:41 by haitkadi          #+#    #+#             */
/*   Updated: 2022/10/26 14:57:42 by haitkadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie* zombieHorde(int N, std::string name){
    Zombie  *zombies;

    zombies = new(std::nothrow) Zombie[N];
    if (!zombies)
        exit(EXIT_FAILURE);
    for (int i = 0; i < N; i++){
        zombies[i].setName(name);
    }
    return zombies;
}