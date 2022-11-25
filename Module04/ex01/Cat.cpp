/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haitkadi <haitkadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 12:25:35 by haitkadi          #+#    #+#             */
/*   Updated: 2022/11/22 15:02:21 by haitkadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/*----------------------------------------------------------------------------*/
Cat::Cat() {
    this->type = "Cat";
    std::cout << "Cat: defualt constructor" << std::endl;
    this->_brain = new(std::nothrow) Brain();
    if (!this->_brain)
        exit(EXIT_FAILURE);
}

/*----------------------------------------------------------------------------*/
Cat::Cat (const Cat &a){
    std::cout << "Cat: copy constructor" << std::endl;
    this->type = a.type;
    delete this->_brain;
    if (a._brain){
        this->_brain = new(std::nothrow) Brain();
        if (!this->_brain)
            exit(EXIT_FAILURE);
        *(this->_brain) = *(a._brain);
    }else
        this->_brain = NULL;
}

/*----------------------------------------------------------------------------*/
Cat & Cat::operator = (const Cat &a){
    if (this != &a){
        std::cout << "Cat: copy assignment operator" << std::endl;
        this->type = a.type;
        delete this->_brain;
        if (a._brain){
            this->_brain = new(std::nothrow) Brain();
            if (!this->_brain)
                exit(EXIT_FAILURE);
            *(this->_brain) = *(a._brain);
        }else
            this->_brain = NULL;
    }
    return(*this);
}

/*----------------------------------------------------------------------------*/
Cat::~Cat (){
    std::cout << "Cat: destructor" << std::endl;
    delete  this->_brain;
}

/*----------------------------------------------------------------------------*/
void    Cat::makeSound() const{
    std::cout << "Meew" << std::endl;
}
