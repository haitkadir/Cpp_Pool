/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haitkadi <haitkadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:32:50 by haitkadi          #+#    #+#             */
/*   Updated: 2022/10/26 15:32:51 by haitkadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>



int main(){
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;
    // printing the addresses
    std::cout << &str << std::endl;
    std::cout << stringPTR << std::endl; 
    std::cout << &stringREF << std::endl;
    // printing the values
    std::cout << str << std::endl;
    std::cout << *stringPTR << std::endl; 
    std::cout << stringREF << std::endl;
    return 0;
}