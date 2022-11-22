/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haitkadi <haitkadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 15:13:36 by haitkadi          #+#    #+#             */
/*   Updated: 2022/11/22 15:13:37 by haitkadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WRONGCAT_H__
#define __WRONGCAT_H__
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{
public:
    WrongCat ();
    WrongCat (const WrongCat &a);
    WrongCat & operator = (const WrongCat &a);
    ~WrongCat ();
/*----------------------------------------------------------------------------*/
    void    makeSound() const;

};

#endif

