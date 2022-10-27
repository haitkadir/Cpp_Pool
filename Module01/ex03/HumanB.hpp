/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haitkadi <haitkadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 11:00:03 by haitkadi          #+#    #+#             */
/*   Updated: 2022/10/27 11:00:04 by haitkadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANB_H__
#define __HUMANB_H__
#include "Weapon.hpp"

class HumanB
{
private:
    Weapon  *weapon;
    std::string name;
public:
    HumanB(std::string Name);
    void    setWeapon(Weapon &theWeapon);
    void    attack();
};


#endif
