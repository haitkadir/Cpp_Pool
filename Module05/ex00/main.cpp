/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haitkadi <haitkadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 16:26:00 by haitkadi          #+#    #+#             */
/*   Updated: 2022/11/25 16:26:01 by haitkadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void){

    try{
        Bureaucrat  mkadm("Si Mohamed", 0);
    } catch(std::exception& e){
        std::cerr << e.what() << std::endl;
    }

    try{
        Bureaucrat  l9ayed("sid l9ayed", 150);
        std::cout << "hello " << l9ayed << std::endl;
        l9ayed.decrementGrade();
    } catch(std::exception& e){
        std::cerr << e.what() << std::endl;
    }

    try{
        Bureaucrat  chikh("sid chikh", 1);
        std::cout << "hello " << chikh << std::endl;
        chikh.incrementGrade();
    } catch(std::exception& e){
        std::cerr << e.what() << std::endl;
    }

    return 0;
}

