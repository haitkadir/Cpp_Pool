/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haitkadi <haitkadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 16:26:33 by haitkadi          #+#    #+#             */
/*   Updated: 2022/11/25 16:26:34 by haitkadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void){

    try{
        Bureaucrat  mkadm("Si Mohamed", 21);
        Form  chahadaSkna("chahadatSoukna", 20, 20);
        mkadm.signForm(chahadaSkna);
        // increment mkadm's Grade
        std::cout << std::endl;
        mkadm.incrementGrade();
        //try to sign again
        mkadm.signForm(chahadaSkna);
        std::cout << std::endl;

        std::cout << chahadaSkna << std::endl;

    } catch(std::exception& e){
        std::cerr << e.what() << std::endl;
    }


    return 0;
}

