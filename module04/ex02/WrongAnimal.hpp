/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haitkadi <haitkadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 12:00:16 by haitkadi          #+#    #+#             */
/*   Updated: 2022/11/21 14:03:08 by haitkadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WRONGANIMAL_H__
#define __WRONGANIMAL_H__
#include <iostream>

class WrongAnimal{
protected:
    std::string type;
public:
    WrongAnimal ();
    WrongAnimal (const WrongAnimal &a);
    ~WrongAnimal ();
    WrongAnimal & operator = (const WrongAnimal &a);
/*----------------------------------------------------------------------------*/
    void    makeSound() const;

/*----------------------------------------------------------------------------*/
    std::string    getType() const;
    
};

#endif

