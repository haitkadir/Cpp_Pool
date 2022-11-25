/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haitkadi <haitkadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 16:26:50 by haitkadi          #+#    #+#             */
/*   Updated: 2022/11/25 16:26:51 by haitkadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"

/*----------------------------------------------------------------------------*/
AForm::AForm ():
    _name(""), _gradeToSign(0), _gradeToExcute(0)
{
    std::cout << "AForm: Default constructor called!" << std::endl;
    this->_isSigned = false;
}

/*----------------------------------------------------------------------------*/
AForm::AForm (const std::string name, const int gradeToSign, const int gradeToExcute):
    _name(name), _gradeToSign(gradeToSign), _gradeToExcute(gradeToExcute)
{
    if (this->_gradeToSign < 1 || this->_gradeToExcute < 1)
        throw std::runtime_error("AForm::GradeTooHighException");
    if (this->_gradeToSign > 150 || this->_gradeToExcute > 150)
        throw std::runtime_error("AForm::GradeTooHighException");
    this->_isSigned = false;
    std::cout << "AForm: Initializer constructor called!" << std::endl;
}

/*----------------------------------------------------------------------------*/
AForm::AForm (const AForm &a): 
    _name(a.getName()), _gradeToSign(a.getGradeToSign()),
    _gradeToExcute(a.getGradeToExcute()), _isSigned(a.getIsSigned())
{
    std::cout << "AForm: Copy constructor called!" << std::endl;
}

/*----------------------------------------------------------------------------*/
AForm & AForm::operator = (const AForm &a){
    if (this != &a){
        std::cout << "AForm: Copy assignment operator called!" << std::endl;
        this->_isSigned = a.getIsSigned();
    }
    return (*this);
}

/*----------------------------------------------------------------------------*/
AForm::~AForm (){
    std::cout << "AForm: Destructor called!" << std::endl;
}

/*----------------------------------------------------------------------------*/
const std::string   AForm::getName() const{
    return (this->_name);
}

/*----------------------------------------------------------------------------*/
int   AForm::getGradeToSign() const{
    return (this->_gradeToSign);
}

/*----------------------------------------------------------------------------*/
int   AForm::getGradeToExcute() const{
    return (this->_gradeToExcute);
}

/*----------------------------------------------------------------------------*/
bool        AForm::getIsSigned() const{
    return (this->_isSigned);
}

/*----------------------------------------------------------------------------*/
void    AForm::beSigned(const Bureaucrat &obj){
    if (!(this->_isSigned)){
        if (obj.getGrade() <= this->getGradeToSign())
            this->_isSigned = true;
        else
            throw std::runtime_error(this->getName() + "::GradeTooLowException");
    } else
        throw std::runtime_error(this->getName() + "::AlreadySigned");
}

/*----------------------------------------------------------------------------*/
std::ostream &operator<<(std::ostream &out, const AForm &obj){
    std::string isSigned = obj.getIsSigned() ? "signed" : " not signed";
	out << "AForm: name " << obj.getName() << ", " << isSigned
        << ", grade to sign " << obj.getGradeToSign()
        << ", grade to excute " << obj.getGradeToExcute();

    return (out);
}