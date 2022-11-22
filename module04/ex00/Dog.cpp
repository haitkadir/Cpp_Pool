/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haitkadi <haitkadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 12:27:01 by haitkadi          #+#    #+#             */
/*   Updated: 2022/11/21 15:59:19 by haitkadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/*----------------------------------------------------------------------------*/
Dog::Dog() {
    this->type = "Dog";
    std::cout << "Dog: defualt constructor" << std::endl;
}

/*----------------------------------------------------------------------------*/
Dog::Dog (const Dog &a){
    std::cout << "Dog: copy constructor" << std::endl;
    this->type = a.type;
}

/*----------------------------------------------------------------------------*/
Dog & Dog::operator = (const Dog &a){
    if (this != &a){
        std::cout << "Dog: copy assignment operator" << std::endl;
        this->type = a.type;
    }
    return(*this);
}

/*----------------------------------------------------------------------------*/
Dog::~Dog (){
    std::cout << "Dog: destructor" << std::endl;
}

/*----------------------------------------------------------------------------*/
    void    Dog::makeSound() const{
        std::cout << "Woof" << std::endl;
    }