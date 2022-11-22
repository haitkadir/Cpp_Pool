/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haitkadi <haitkadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 18:04:52 by haitkadi          #+#    #+#             */
/*   Updated: 2022/11/21 18:04:53 by haitkadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DOG_H__
#define __DOG_H__
#include "Animal.hpp"

class Dog : public Animal{
public:
    Dog ();
    Dog (const Dog &a);
    Dog & operator = (const Dog &a);
    ~Dog ();
/*----------------------------------------------------------------------------*/
    virtual void    makeSound() const;
};

#endif

