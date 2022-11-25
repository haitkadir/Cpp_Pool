#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intren.hpp"

int main(void){

        AForm  *shrubbery = NULL;
        AForm  *robotomizer = NULL;
        AForm  *paradon = NULL;

    try{
        Bureaucrat  mkadm("Si Mohamed", 20);
        Intren  intren;
        shrubbery = intren.makeForm("shrubbery creation", "home");
        robotomizer = intren.makeForm("robotomy request", "Elon Musk");
        paradon = intren.makeForm("presidential paradon", "prisoner");
        std::cout << std::endl;
        if (shrubbery){
            mkadm.signForm(*shrubbery);
            mkadm.executeForm(*shrubbery);
            std::cout << std::endl;
            std::cout << *shrubbery << std::endl;
        }
        std::cout << std::endl;
        if(robotomizer){
            mkadm.signForm(*robotomizer);
            mkadm.executeForm(*robotomizer);
            std::cout << std::endl;
            std::cout << *robotomizer << std::endl;
        }
        std::cout << std::endl;
        if(paradon){
            mkadm.signForm(*paradon);
            mkadm.executeForm(*paradon);
            std::cout << std::endl;
            std::cout << *paradon << std::endl;
        }
        std::cout << std::endl;

    } catch(std::exception& e){
        std::cerr << e.what() << std::endl;
    }

    delete paradon;
    delete robotomizer;
    delete shrubbery;

    return 0;
}

