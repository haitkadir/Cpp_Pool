/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haitkadi <haitkadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 12:00:16 by haitkadi          #+#    #+#             */
/*   Updated: 2022/11/22 15:04:52 by haitkadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ANIMAL_H__
#define __ANIMAL_H__
#include <iostream>

class Animal{
protected:
    std::string type;
public:
    Animal ();
    Animal (const Animal &a);
    virtual ~Animal ();
    Animal & operator = (const Animal &a);
/*----------------------------------------------------------------------------*/
    virtual void    makeSound() const = 0;

/*----------------------------------------------------------------------------*/
    virtual std::string    getType() const = 0;
    
};

#endif

