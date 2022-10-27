/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haitkadi <haitkadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 11:01:10 by haitkadi          #+#    #+#             */
/*   Updated: 2022/10/27 11:01:11 by haitkadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WEAPON_H__
#define __WEAPON_H__
#include <iostream>

class Weapon{
private:
    std::string type;
public:
    Weapon(std::string Type);
    const std::string &getType();
    void    setType(std::string Type);
};


#endif
