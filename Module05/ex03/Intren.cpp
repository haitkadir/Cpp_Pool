#include "Intren.hpp"

/*----------------------------------------------------------------------------*/
Intren::Intren (){
    std::cout << "Intren: Default constructor called!" << std::endl;
}

/*----------------------------------------------------------------------------*/
Intren::Intren (const Intren &a){
    (void)a;
    std::cout << "Intren: Copy constructor called!" << std::endl;

}

/*----------------------------------------------------------------------------*/
Intren & Intren::operator = (const Intren &a){
    if (this != &a){
        std::cout << "Intren: Copy assignment operator called!" << std::endl;
    }
    return (*this);
}

/*----------------------------------------------------------------------------*/
Intren::~Intren (){
    std::cout << "Intren: Destructor called!" << std::endl;
}

/*----------------------------------------------------------------------------*/
AForm*   Intren::makeForm(std::string formName, std::string formTarget){
    std::string forms[3] = {"shrubbery creation", "robotomy request", "presidential paradon"};
    AForm   *ptr = NULL;

    int i = 0;
    while( i < 3){
        if(forms[i].compare(formName) == 0)
            break;
        i++;
    }

    switch (i)
    {
    case 0:
        ptr = new ShrubberyCreationForm(formTarget);
        break;
    case 1:
        ptr = new RobotomyRequestForm(formTarget);
        break;
    case 2:
        ptr = new PresidentialPardonForm(formTarget);
        break;
    
    default:
        std::cout << "No Form name matchs for \"" << formName << "\"" << std::endl;
        return NULL;
        break;
    }

    std::cout << "Intren, creates " << formName << " Form" << std::endl;
    return ptr;
}