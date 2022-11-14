/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haitkadi <haitkadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 20:14:54 by haitkadi          #+#    #+#             */
/*   Updated: 2022/11/14 20:14:55 by haitkadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_H__
#define __FIXED_H__
#include <iostream>

class Fixed{
private:
    int RawBits;
    static const int fracBits = 8;
public:
    Fixed ();
    Fixed (const Fixed &a);
    // My own functoins
    void setRawBits( int const raw );
    int getRawBits( void ) const;
    // Destructor
    Fixed & operator = (const Fixed &a);
    ~Fixed ();
};

#endif

