/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haitkadi <haitkadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 10:58:48 by haitkadi          #+#    #+#             */
/*   Updated: 2022/10/27 10:59:51 by haitkadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANA_H__
#define __HUMANA_H__
#include "Weapon.hpp"

class HumanA
{
private:
    Weapon  &weapon;
    std::string name;
public:
    HumanA(std::string Name, Weapon &theWeapon);
    void    attack();
};


#endif
