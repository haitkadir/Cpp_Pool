/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haitkadi <haitkadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 12:02:25 by haitkadi          #+#    #+#             */
/*   Updated: 2022/11/22 15:05:24 by haitkadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/*----------------------------------------------------------------------------*/
Animal::Animal () : type("????"){
    std::cout << "Animal: defualt constructor" << std::endl;
}

/*----------------------------------------------------------------------------*/
Animal::Animal (const Animal &a){
    std::cout << "Animal: copy constructor" << std::endl;
    this->type = a.type;
}

/*----------------------------------------------------------------------------*/
Animal & Animal::operator = (const Animal &a){
    if (this != &a){
        std::cout << "Animal: copy assignment operator" << std::endl;
        this->type = a.type;
    }
    return(*this);
}

/*----------------------------------------------------------------------------*/
Animal::~Animal (){
    std::cout << "Animal: destructor" << std::endl;
}

