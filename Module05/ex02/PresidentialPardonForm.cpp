#include "PresidentialPardonForm.hpp"


/*----------------------------------------------------------------------------*/
PresidentialPardonForm::PresidentialPardonForm (): AForm()
{
    std::cout << "PresidentialPardonForm: Default constructor called!" << std::endl;
}

/*----------------------------------------------------------------------------*/
PresidentialPardonForm::PresidentialPardonForm (const std::string target):
    AForm("PresidentialPardonForm", 25, 5), _target(target)
{
    std::cout << "PresidentialPardonForm: Initializer constructor called!" << std::endl;
}

/*----------------------------------------------------------------------------*/
PresidentialPardonForm::PresidentialPardonForm (const PresidentialPardonForm &a): AForm(a), _target(a._target)
{
    std::cout << "PresidentialPardonForm: Copy constructor called!" << std::endl;
}

/*----------------------------------------------------------------------------*/
PresidentialPardonForm & PresidentialPardonForm::operator = (const PresidentialPardonForm &a){
    if (this != &a){
        std::cout << "PresidentialPardonForm: Copy assignment operator called!" << std::endl;
        *this = a;
    }
    return (*this);
}

/*----------------------------------------------------------------------------*/
PresidentialPardonForm::~PresidentialPardonForm (){
    std::cout << "PresidentialPardonForm: Destructor called!" << std::endl;
}


void    PresidentialPardonForm::execute(Bureaucrat const & executor) const{
    if (this->getIsSigned()){
        if (executor.getGrade() <= this->getGradeToExcute()){
            std::cout << this->_target << "has been pardoned by Zaphod Beeblebrox" << std::endl;
        }else
            throw std::runtime_error("PresidentialPardonForm::GradeTooLowExeption");
    }else
        throw std::runtime_error("PresidentialPardonForm::FormNotSignedExeption");
}