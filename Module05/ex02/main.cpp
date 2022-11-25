/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haitkadi <haitkadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 16:27:21 by haitkadi          #+#    #+#             */
/*   Updated: 2022/11/25 16:27:22 by haitkadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void){

    try{
        Bureaucrat  mkadm("Si Mohamed", 150);
        ShrubberyCreationForm  shrubbery("home");
        RobotomyRequestForm  robotomizer("Elon Musk");
        PresidentialPardonForm  paradon("prisoner");
        std::cout << std::endl;
        mkadm.signForm(shrubbery);
        mkadm.executeForm(shrubbery);
        std::cout << std::endl;
        mkadm.signForm(robotomizer);
        mkadm.executeForm(robotomizer);
        std::cout << std::endl;
        mkadm.signForm(paradon);
        mkadm.executeForm(paradon);
        std::cout << std::endl;

        std::cout << shrubbery << std::endl;
        std::cout << robotomizer << std::endl;
        std::cout << paradon << std::endl;
        std::cout << std::endl;
    } catch(std::exception& e){
        std::cerr << e.what() << std::endl;
    }


    return 0;
}

