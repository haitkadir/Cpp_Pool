#ifndef __INTREN_H__
#define __INTREN_H__
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intren{
public:
    Intren ();
    Intren (const Intren &a);
    Intren & operator = (const Intren &a);
    ~Intren ();
/*----------------------------------------------------------------------------*/
    AForm*   makeForm(std::string formName, std::string formTarget);

};

#endif

