/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haitkadi <haitkadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 15:14:01 by haitkadi          #+#    #+#             */
/*   Updated: 2022/11/22 15:14:02 by haitkadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DOG_H__
#define __DOG_H__
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal{
private:
    Brain   *_brain;
public:
    Dog ();
    Dog (const Dog &a);
    Dog & operator = (const Dog &a);
    ~Dog ();
/*----------------------------------------------------------------------------*/
    virtual void    makeSound() const;

/*----------------------------------------------------------------------------*/
    Brain & getBrain();

};

#endif

