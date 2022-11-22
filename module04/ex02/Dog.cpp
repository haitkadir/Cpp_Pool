/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haitkadi <haitkadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 12:27:01 by haitkadi          #+#    #+#             */
/*   Updated: 2022/11/22 15:06:40 by haitkadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/*----------------------------------------------------------------------------*/
Dog::Dog() {
    this->type = "Dog";
    std::cout << "Dog: defualt constructor" << std::endl;
    this->_brain = new(std::nothrow) Brain();
    if(!this->_brain)
        exit(EXIT_FAILURE);
}

/*----------------------------------------------------------------------------*/
Dog::Dog (const Dog &a){
    std::cout << "Dog: copy constructor" << std::endl;
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
Dog & Dog::operator = (const Dog &a){
    if (this != &a){
        std::cout << "Dog: copy assignment operator" << std::endl;
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
Dog::~Dog (){
    std::cout << "Dog: destructor" << std::endl;
    delete this->_brain;
}

/*----------------------------------------------------------------------------*/
void    Dog::makeSound() const{
    std::cout << "Woof" << std::endl;
}

/*----------------------------------------------------------------------------*/
Brain & Dog::getBrain() {
    return *(this->_brain);
}

/*----------------------------------------------------------------------------*/
std::string    Dog::getType() const{
    return(this->type);
}