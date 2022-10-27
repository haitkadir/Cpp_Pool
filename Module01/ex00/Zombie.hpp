/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haitkadi <haitkadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 12:56:23 by haitkadi          #+#    #+#             */
/*   Updated: 2022/10/26 12:56:24 by haitkadi         ###   ########.fr       */
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
    Zombie(std::string Name);
    ~Zombie();
    void    announce(void);
};

Zombie* newZombie(std::string name);
void    randomChump(std::string name);

#endif