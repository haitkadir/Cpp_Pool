#ifndef __PRESIDENTIALPARDONFORM_H__
#define __PRESIDENTIALPARDONFORM_H__
#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"


class PresidentialPardonForm : public AForm {
private:
    const std::string _target;
public:
    PresidentialPardonForm ();
    PresidentialPardonForm (const std::string target);
    PresidentialPardonForm (const PresidentialPardonForm &a);
    PresidentialPardonForm & operator = (const PresidentialPardonForm &a);
    ~PresidentialPardonForm (); 
    void    execute(Bureaucrat const & executor) const;
};


#endif

