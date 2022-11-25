#ifndef __SHRUBBERYCREATIONFORM_H__
#define __SHRUBBERYCREATIONFORM_H__
#include <iostream>
#include <fstream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"


class ShrubberyCreationForm : public AForm {
private:
    const std::string _target;
public:
    ShrubberyCreationForm ();
    ShrubberyCreationForm (const std::string target);
    ShrubberyCreationForm (const ShrubberyCreationForm &a);
    ShrubberyCreationForm & operator = (const ShrubberyCreationForm &a);
    ~ShrubberyCreationForm ();
    // overide excution method
    void    execute(Bureaucrat const & executor) const;
};


#endif

