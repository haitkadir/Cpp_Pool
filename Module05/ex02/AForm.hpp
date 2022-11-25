/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haitkadi <haitkadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 16:26:54 by haitkadi          #+#    #+#             */
/*   Updated: 2022/11/25 16:26:55 by haitkadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __AFORM_H__
#define __AFORM_H__
#include <iostream>
#include <fstream>
#include "Bureaucrat.hpp"

class AForm{
private:
    const std::string   _name;
    const int           _gradeToSign;
    const int           _gradeToExcute;
    bool                _isSigned;

public:
    AForm ();
    AForm (const std::string name, const int gradeToSign, const int gradeToExcute);
    AForm (const AForm &a);
    AForm & operator = (const AForm &a);
    virtual ~AForm ();
/*----------------------------------------------------------------------------*/
    const std::string   getName() const;
    int   getGradeToSign() const;
    int   getGradeToExcute() const;
    bool  getIsSigned() const;
/*----------------------------------------------------------------------------*/
    void    beSigned(const Bureaucrat &bc);
    virtual void    execute(Bureaucrat const & executor) const = 0;
};

std::ostream& operator << (std::ostream &out, const AForm &obj);


#endif

