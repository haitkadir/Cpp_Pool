/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CastPtr.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haitkadi <haitkadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 21:50:30 by haitkadi          #+#    #+#             */
/*   Updated: 2022/11/26 21:50:31 by haitkadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CASTPTR_H__
#define __CASTPTR_H__
#include <iostream>
#include <cstdint>

typedef struct s_data{
    int     nb;
    char    ch;
}   Data;

class CastPtr{
public:
    uintptr_t   serialize(Data* ptr);
    Data*       deserialize(uintptr_t raw);
};

#endif

