/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CastPtr.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haitkadi <haitkadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 21:50:27 by haitkadi          #+#    #+#             */
/*   Updated: 2022/11/26 21:50:28 by haitkadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CastPtr.hpp"

/*----------------------------------------------------------------------------*/
uintptr_t   CastPtr::serialize(Data* ptr){
    if (ptr)
        return reinterpret_cast<uintptr_t>(ptr);
    return 0;
}

/*----------------------------------------------------------------------------*/
Data*       CastPtr::deserialize(uintptr_t raw){
    if (raw)
        return reinterpret_cast<Data*>(raw);
    return NULL;
}




