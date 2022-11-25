#ifndef __FORM_H__
#define __FORM_H__
#include <iostream>
#include "Bureaucrat.hpp"

class Form{
private:
    const std::string   _name;
    const int           _gradeToSign;
    const int           _gradeToExcute;
    bool                _isSigned;

public:
    Form ();
    Form (const std::string name, const int gradeToSign, const int gradeToExcute);
    Form (const Form &a);
    Form & operator = (const Form &a);
    ~Form ();
/*----------------------------------------------------------------------------*/
    const std::string   getName() const;
    int   getGradeToSign() const;
    int   getGradeToExcute() const;
    bool  getIsSigned() const;
/*----------------------------------------------------------------------------*/
    void    beSigned(const Bureaucrat &bc);

};

std::ostream& operator << (std::ostream &out, const Form &obj);


#endif

