/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haitkadi <haitkadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 18:20:03 by haitkadi          #+#    #+#             */
/*   Updated: 2022/11/22 11:32:23 by haitkadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Brain.hpp"

/*----------------------------------------------------------------------------*/
Brain::Brain (){
    std::cout << "Brain: Default constructor called!" << std::endl;
}

/*----------------------------------------------------------------------------*/
Brain::Brain (const Brain &a){
    std::cout << "Brain: Copy constructor called!" << std::endl;
    this->setIdeas(a.getIdeas());
}

/*----------------------------------------------------------------------------*/
Brain & Brain::operator = (const Brain &a){
    if (this != &a){
        std::cout << "Brain: Copy assignment operator called!" << std::endl;
        this->setIdeas(a.getIdeas());
    }
    return (*this);
}

/*----------------------------------------------------------------------------*/
Brain::~Brain (){
    std::cout << "Brain: Destructor called!" << std::endl;
}

/*----------------------------------------------------------------------------*/
void    Brain::setIdeas(const std::string (&arr)[100]){
    for(int i = 0; i < 100; i++)
        this->ideas[i] = arr[i];
}
    
/*----------------------------------------------------------------------------*/
const std::string   (&Brain::getIdeas(void) const)[100] {
    return(this->ideas);
}

    