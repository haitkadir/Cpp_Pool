#ifndef __ROBOTOMYREQUESTFORM_H__
#define __ROBOTOMYREQUESTFORM_H__
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include "Bureaucrat.hpp"
#include "AForm.hpp"


class RobotomyRequestForm : public AForm {
private:
    const std::string _target;
public:
    RobotomyRequestForm ();
    RobotomyRequestForm (const std::string target);
    RobotomyRequestForm (const RobotomyRequestForm &a);
    RobotomyRequestForm & operator = (const RobotomyRequestForm &a);
    ~RobotomyRequestForm (); 
    void    execute(Bureaucrat const & executor) const;
};


#endif

