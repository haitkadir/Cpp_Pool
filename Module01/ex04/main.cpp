/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haitkadi <haitkadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 13:49:03 by haitkadi          #+#    #+#             */
/*   Updated: 2022/11/01 13:49:04 by haitkadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"


int main(int ac, char **av){
    if (ac == 4){
        searchAndReplace(av[1], av[2], av[3]);
    }else {
        std::cout << "\033[1;33m"
        << "Wrong arguments!. "
        << "\033[1;32m"
        << "fileName searchStr replaceStr."
        << "\033[0m" << std::endl;
    }
    return 0;
}