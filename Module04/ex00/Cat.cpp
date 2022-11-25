/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haitkadi <haitkadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 12:25:35 by haitkadi          #+#    #+#             */
/*   Updated: 2022/11/21 15:59:01 by haitkadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/*----------------------------------------------------------------------------*/
Cat::Cat() {
    this->type = "Cat";
    std::cout << "Cat: defualt constructor" << std::endl;
}

/*----------------------------------------------------------------------------*/
Cat::Cat (const Cat &a){
    std::cout << "Cat: copy constructor" << std::endl;
    this->type = a.type;
}

/*----------------------------------------------------------------------------*/
Cat & Cat::operator = (const Cat &a){
    if (this != &a){
        std::cout << "Cat: copy assignment operator" << std::endl;
        this->type = a.type;
    }
    return(*this);
}

/*----------------------------------------------------------------------------*/
Cat::~Cat (){
    std::cout << "Cat: destructor" << std::endl;
}

/*----------------------------------------------------------------------------*/
void    Cat::makeSound() const{
    std::cout << "Meew" << std::endl;
}