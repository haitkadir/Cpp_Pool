/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haitkadi <haitkadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 04:09:04 by haitkadi          #+#    #+#             */
/*   Updated: 2022/11/14 20:07:39 by haitkadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_H__
#define __FIXED_H__
#include <iostream>
#include <cmath>

class Fixed{
private:
    int RawBits;
    static const int fracBits = 8;
public:
    Fixed ();
    Fixed (const Fixed &a);
    Fixed (const int nb);
    Fixed (const float fn);
    void setRawBits( int const raw );
    int getRawBits( void ) const;
    float toFloat( void ) const;
    int toInt( void ) const;
/*----------------------------------------------------------------------------*/
/*                           Operators overloading                            */
/*----------------------------------------------------------------------------*/
    bool operator > (const Fixed &a)const;
    bool operator < (const Fixed &a)const;
    bool operator >= (const Fixed &a)const;
    bool operator <= (const Fixed &a)const;
    bool operator == (const Fixed &a)const;
    bool operator != (const Fixed &a)const;
    // Arithmatic operators
    Fixed & operator + (const Fixed &a);
    Fixed & operator - (const Fixed &a);
    Fixed & operator * (const Fixed &a);
    Fixed & operator / (const Fixed &a);
    // post and pre increment operators overloading
    Fixed & operator ++ ();
    Fixed & operator -- ();
    Fixed   operator ++ (int);
    Fixed   operator -- (int);
/*----------------------------------------------------------------------------*/
/*                               Static members                               */
/*----------------------------------------------------------------------------*/
    static Fixed & min(Fixed &obj1, Fixed &obj2);
    static Fixed & min(const Fixed &obj1, const Fixed &obj2);
    static Fixed & max(Fixed &obj1, Fixed &obj2);
    static Fixed & max(const Fixed &obj1, const Fixed &obj2);

/*-------------------------- Copy assignment operator ------------------------*/
    Fixed & operator = (const Fixed &a);

/*---------------------------------- Destructor ------------------------------*/
    ~Fixed ();
};

std::ostream &  operator << (std::ostream &stream, const Fixed &object);

#endif
