/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haitkadi <haitkadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 16:27:40 by haitkadi          #+#    #+#             */
/*   Updated: 2022/11/25 16:27:41 by haitkadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

/*----------------------------------------------------------------------------*/
RobotomyRequestForm::RobotomyRequestForm (): AForm()
{
    std::cout << "RobotomyRequestForm: Default constructor called!" << std::endl;
}

/*----------------------------------------------------------------------------*/
RobotomyRequestForm::RobotomyRequestForm (const std::string target):
    AForm("RobotomyRequestForm", 72, 45), _target(target)
{
    std::cout << "RobotomyRequestForm: Initializer constructor called!" << std::endl;
}

/*----------------------------------------------------------------------------*/
RobotomyRequestForm::RobotomyRequestForm (const RobotomyRequestForm &a): AForm(a), _target(a._target)
{
    std::cout << "RobotomyRequestForm: Copy constructor called!" << std::endl;
}

/*----------------------------------------------------------------------------*/
RobotomyRequestForm & RobotomyRequestForm::operator = (const RobotomyRequestForm &a){
    if (this != &a){
        std::cout << "RobotomyRequestForm: Copy assignment operator called!" << std::endl;
        *this = a;
    }
    return (*this);
}

/*----------------------------------------------------------------------------*/
RobotomyRequestForm::~RobotomyRequestForm (){
    std::cout << "RobotomyRequestForm: Destructor called!" << std::endl;
}


void    RobotomyRequestForm::execute(Bureaucrat const & executor) const{
    if (this->getIsSigned()){
        if (executor.getGrade() <= this->getGradeToExcute()){
            std::cout << "Drilling nois" << std::endl;
            srand(time(NULL));
            if (rand() % 2){
                std::cout << "Then, informs that " << this->_target
                << " has been robotomized successfully 50% of the time" << std::endl;
            }else
                std::cout << "robotomy failed" << std::endl;
        }else
            throw std::runtime_error("RobotomyRequestForm::GradeTooLowExeption");
    }else
        throw std::runtime_error("RobotomyRequestForm::FormNotSignedExeption");
}