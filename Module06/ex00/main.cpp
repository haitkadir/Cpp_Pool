/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haitkadi <haitkadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 21:49:58 by haitkadi          #+#    #+#             */
/*   Updated: 2022/11/26 21:49:59 by haitkadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ConverType.hpp"

int main(int ac, char **av){
    if (ac == 2){
        if (av[1]){
            ConverType convertor(av[1]);
            convertor.toChar();
            convertor.toInt();
            convertor.toFloat();
            convertor.toDouble();
        }

    } else
        std::cerr << "Bad arguments..." << std::endl;
    return 0;
}