/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haitkadi <haitkadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 13:58:34 by haitkadi          #+#    #+#             */
/*   Updated: 2022/11/03 13:58:42 by haitkadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av){
    Harl    harl;
    if(ac == 2){
        harl.complain(av[1]);
    }else {
        std::cout << "It Takes one argument: ./harlFilter arg" << std::endl;
    }
    return 0;
}