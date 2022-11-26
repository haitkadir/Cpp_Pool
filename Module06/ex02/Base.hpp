/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haitkadi <haitkadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 21:50:49 by haitkadi          #+#    #+#             */
/*   Updated: 2022/11/26 21:50:50 by haitkadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BASE_H__
#define __BASE_H__
#include <iostream>
#include <cstdlib>
#include <ctime>


class Base{
public:
    virtual ~Base ();
};

class A: public Base{

};

class B: public Base{
    
};

class C: public Base{
    
};

/*----------------------------------------------------------------------------*/
Base * generate(void);

/*----------------------------------------------------------------------------*/
void identify(Base* p);

/*----------------------------------------------------------------------------*/
void identify(Base& p);


#endif

