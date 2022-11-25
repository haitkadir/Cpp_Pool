/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haitkadi <haitkadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 18:04:44 by haitkadi          #+#    #+#             */
/*   Updated: 2022/11/21 18:04:45 by haitkadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CAT_H__
#define __CAT_H__
#include "Animal.hpp"

class Cat : public Animal{
public:
    Cat ();
    Cat (const Cat &a);
    Cat & operator = (const Cat &a);
    ~Cat ();
/*----------------------------------------------------------------------------*/
    virtual void    makeSound() const;
};

#endif

