/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haitkadi <haitkadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 16:26:20 by haitkadi          #+#    #+#             */
/*   Updated: 2022/11/25 16:26:21 by haitkadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/*----------------------------------------------------------------------------*/
Form::Form ():
    _name(""), _gradeToSign(0), _gradeToExcute(0)
{
    std::cout << "Form: Default constructor called!" << std::endl;
    this->_isSigned = false;
}

/*----------------------------------------------------------------------------*/
Form::Form (const std::string name, const int gradeToSign, const int gradeToExcute):
    _name(name), _gradeToSign(gradeToSign), _gradeToExcute(gradeToExcute)
{
    if (this->_gradeToSign < 1 || this->_gradeToExcute < 1)
        throw std::runtime_error("Form::GradeTooHighException");
    if (this->_gradeToSign > 150 || this->_gradeToExcute > 150)
        throw std::runtime_error("Form::GradeTooHighException");
    this->_isSigned = false;
    std::cout << "Form: Initializer constructor called!" << std::endl;
}

/*----------------------------------------------------------------------------*/
Form::Form (const Form &a): 
    _name(a.getName()), _gradeToSign(a.getGradeToSign()),
    _gradeToExcute(a.getGradeToExcute()), _isSigned(a.getIsSigned())
{
    std::cout << "Form: Copy constructor called!" << std::endl;
}

/*----------------------------------------------------------------------------*/
Form & Form::operator = (const Form &a){
    if (this != &a){
        std::cout << "Form: Copy assignment operator called!" << std::endl;
        this->_isSigned = a.getIsSigned();
    }
    return (*this);
}

/*----------------------------------------------------------------------------*/
Form::~Form (){
    std::cout << "Form: Destructor called!" << std::endl;
}

/*----------------------------------------------------------------------------*/
const std::string   Form::getName() const{
    return (this->_name);
}

/*----------------------------------------------------------------------------*/
int   Form::getGradeToSign() const{
    return (this->_gradeToSign);
}

/*----------------------------------------------------------------------------*/
int   Form::getGradeToExcute() const{
    return (this->_gradeToExcute);
}

/*----------------------------------------------------------------------------*/
bool        Form::getIsSigned() const{
    return (this->_isSigned);
}

/*----------------------------------------------------------------------------*/
void    Form::beSigned(const Bureaucrat &obj){
    if (!(this->_isSigned)){
        if (obj.getGrade() <= this->getGradeToSign())
            this->_isSigned = true;
        else
            throw std::runtime_error("Form::GradeTooLowException");
    } else
        throw std::runtime_error("Form::FormAlreadySigned");
}

/*----------------------------------------------------------------------------*/
std::ostream &operator<<(std::ostream &out, const Form &obj){
    std::string isSigned = obj.getIsSigned() ? "signed" : " not signed";
	out << "Form: name " << obj.getName() << ", " << isSigned
        << ", grade to sign " << obj.getGradeToSign()
        << ", grade to excute " << obj.getGradeToExcute();

    return (out);
}