/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haitkadi <haitkadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 15:13:11 by haitkadi          #+#    #+#             */
/*   Updated: 2022/11/22 15:13:12 by haitkadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CAT_H__
#define __CAT_H__
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal{
private:
    Brain   *_brain;
public:
    Cat ();
    Cat (const Cat &a);
    Cat & operator = (const Cat &a);
    ~Cat ();
/*----------------------------------------------------------------------------*/
    virtual void    makeSound() const;

/*----------------------------------------------------------------------------*/
    virtual std::string    getType() const;

};

#endif

