/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haitkadi <haitkadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 12:25:35 by haitkadi          #+#    #+#             */
/*   Updated: 2022/11/21 15:01:03 by haitkadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

/*----------------------------------------------------------------------------*/
WrongCat::WrongCat() {
    this->type = "Cat";
    std::cout << "WrongCat: defualt constructor" << std::endl;
}

/*----------------------------------------------------------------------------*/
WrongCat::WrongCat (const WrongCat &a){
    std::cout << "WrongCat: copy constructor" << std::endl;
    this->type = a.type;
}

/*----------------------------------------------------------------------------*/
WrongCat & WrongCat::operator = (const WrongCat &a){
    if (this != &a){
        std::cout << "WrongCat: copy assignment operator" << std::endl;
        this->type = a.type;
    }
    return(*this);
}

/*----------------------------------------------------------------------------*/
WrongCat::~WrongCat (){
    std::cout << "WrongCat: destructor" << std::endl;
}


/*----------------------------------------------------------------------------*/
void    WrongCat::makeSound() const{
    std::cout << "Meew" << std::endl;
    
}

