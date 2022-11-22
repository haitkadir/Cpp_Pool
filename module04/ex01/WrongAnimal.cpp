/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haitkadi <haitkadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 12:02:25 by haitkadi          #+#    #+#             */
/*   Updated: 2022/11/21 16:04:29 by haitkadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

/*----------------------------------------------------------------------------*/
WrongAnimal::WrongAnimal () : type("????"){
    std::cout << "WrongAnimal: defualt constructor" << std::endl;
}

/*----------------------------------------------------------------------------*/
WrongAnimal::WrongAnimal (const WrongAnimal &a){
    std::cout << "WrongAnimal: copy constructor" << std::endl;
    this->type = a.type;
}

/*----------------------------------------------------------------------------*/
WrongAnimal & WrongAnimal::operator = (const WrongAnimal &a){
    if (this != &a){
        std::cout << "WrongAnimal: copy assignment operator" << std::endl;
        this->type = a.type;
    }
    return(*this);
}

/*----------------------------------------------------------------------------*/
WrongAnimal::~WrongAnimal (){
    std::cout << "WrongAnimal: destructor" << std::endl;
}

/*----------------------------------------------------------------------------*/
void    WrongAnimal::makeSound() const{
    std::cout << "???" << std::endl;
    
}
/*----------------------------------------------------------------------------*/
    std::string    WrongAnimal::getType() const{
        return(this->type);
    }
