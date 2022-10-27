/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haitkadi <haitkadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 14:57:36 by haitkadi          #+#    #+#             */
/*   Updated: 2022/10/26 14:57:37 by haitkadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE_H__
#define __ZOMBIE_H__
#include <iostream>

class Zombie
{
private:
    std::string name;
public:
    Zombie() {};
    void    announce(void);
    void    setName(std::string Name);
    ~Zombie();
};

Zombie* zombieHorde(int N, std::string name);

#endif