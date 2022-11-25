#ifndef __BUREAUCRAT_H__
#define __BUREAUCRAT_H__
#include <iostream>
#include <exception>

class Form; // forward declaration 

class Bureaucrat{
private:
    const std::string _name;
    int _grade;
public:
    Bureaucrat ();
    Bureaucrat (const std::string name, int grade);
    Bureaucrat (const Bureaucrat &a);
    Bureaucrat & operator = (const Bureaucrat &a);
    ~Bureaucrat ();

/*----------------------------------------------------------------------------*/
    const std::string  getName() const;
    int   getGrade() const;
    void  incrementGrade();
    void  decrementGrade();

/*----------------------------------------------------------------------------*/
    void  signForm(Form &form)const;
};


std::ostream& operator << (std::ostream &out, const Bureaucrat &obj);

#endif

