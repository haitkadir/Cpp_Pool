/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haitkadi <haitkadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 21:50:34 by haitkadi          #+#    #+#             */
/*   Updated: 2022/11/26 22:21:43 by haitkadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CastPtr.hpp"

int main(void){
    CastPtr castptr;
    Data    data;
    data.ch = 'H';
    data.nb = 12345;

    Data    *ptr;
    std::cout << "Data value nb: " << data.nb << ", ch: " << data.ch << std::endl; 
    uintptr_t raw = castptr.serialize(&data);
    std::cout << "raw: " << &data << std::endl;
    std::cout << "raw: " << raw << std::endl;
    ptr = castptr.deserialize(raw);
    std::cout << "Data value nb: " << ptr->nb << ", ch: " << ptr->ch << std::endl; 


    return 0;
}

