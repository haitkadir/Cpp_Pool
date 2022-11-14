/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haitkadi <haitkadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 03:56:04 by haitkadi          #+#    #+#             */
/*   Updated: 2022/11/14 04:59:06 by haitkadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*----------------------------------------------------------------------------*/
Fixed::Fixed (){
    this->RawBits = 0;
    std::cout << "Default constructor called" << std::endl;
}

/*- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */
Fixed::Fixed (const Fixed &a){
    this->RawBits = a.RawBits;
    std::cout << "Copy constructor called" << std::endl;
}

/*- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */
Fixed::Fixed (const int nb){
    std::cout << "Int constructor called" << std::endl;
    this->RawBits = nb;
    this->RawBits = (this->RawBits << this->fracBits);
}

/*- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */
Fixed::Fixed (const float fn){
    std::cout << "Float constructor called" << std::endl;
    this->setRawBits(roundf(fn * 256));
}

/*- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */
void Fixed::setRawBits( int const raw ){
    this->RawBits = raw;
}

/*- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */
int Fixed::getRawBits( void ) const{
    return this->RawBits;
}

/*- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */
float Fixed::toFloat( void ) const{
    return this->getRawBits() / (float)256;
}

/*- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */
int Fixed::toInt( void ) const{
    return this->RawBits >> this->fracBits;
}

/*----------------------------------------------------------------------------*/
/*                           Operators overloading                            */
/*----------------------------------------------------------------------------*/
bool Fixed::operator > (const Fixed &a)const{
    if (this->RawBits > a.getRawBits())
        return true;
    return false;
}

/*- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */
bool Fixed::operator < (const Fixed &a)const{
    if (this->RawBits < a.getRawBits())
        return true;
    return false;
}

/*- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */
bool Fixed::operator >= (const Fixed &a)const{
    if (this->RawBits >= a.getRawBits())
        return true;
    return false;
}

/*- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */
bool Fixed::operator <= (const Fixed &a)const{
    if (this->RawBits <= a.getRawBits())
        return true;
    return false;
}

/*- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */
bool Fixed::operator == (const Fixed &a)const{
    if (this->RawBits == a.getRawBits())
        return true;
    return false;
}

/*- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */
bool Fixed::operator != (const Fixed &a)const{
    if (this->RawBits != a.getRawBits())
        return true;
    return false;
}

/*----------------------------------------------------------------------------*/
Fixed & Fixed::operator + (const Fixed &a){
    if (this != &a)
        this->RawBits += a.getRawBits();
    return *this;
}

/*- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */
Fixed & Fixed::operator - (const Fixed &a){
    if (this != &a)
        this->RawBits -= a.getRawBits();
    return *this;
}

/*- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */
Fixed & Fixed::operator * (const Fixed &a){
    if (this != &a){
        this->RawBits *= a.getRawBits();
        this->RawBits = this->RawBits >> 8;
    }
    return *this;
}

/*- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */
Fixed & Fixed::operator / (const Fixed &a){
    if (this != &a){
        this->RawBits /= a.getRawBits();
        this->RawBits = this->RawBits << 8;
    }
    return *this;
}

/*- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */
// post and pre increment operators overloading
Fixed &  Fixed::operator ++ (){
    ++(this->RawBits);
    return (*this);
}

/*- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */
Fixed &  Fixed::operator -- (){
    --(this->RawBits);
    return (*this);
}

/*- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */
Fixed  Fixed::operator ++ (int){
    Fixed temp(*this);
    ++(*this);
    return (temp);
}

/*- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */
Fixed  Fixed::operator -- (int){
    Fixed temp(*this);
    --(*this);
    return (temp);
}

/*----------------------------------------------------------------------------*/
/*                               Static members                               */
/*----------------------------------------------------------------------------*/
Fixed & Fixed::min(Fixed &obj1, Fixed &obj2){
    return obj1.getRawBits() < obj2.getRawBits() ? obj1 : obj2;
}
/*- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */

Fixed & Fixed::min(const Fixed &obj1, const Fixed &obj2){
    return obj1.getRawBits() < obj2.getRawBits() ? \
        const_cast<Fixed&>(obj1) : const_cast<Fixed&>(obj1);
}

/*----------------------------------------------------------------------------*/
/*                         Copy assignment operator                           */
/*----------------------------------------------------------------------------*/
Fixed & Fixed::operator = (const Fixed &a){
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &a)
        this->RawBits = a.getRawBits();
    return *this;
}


/*----------------------------------------------------------------------------*/
/*                                Destructor                                  */
/*----------------------------------------------------------------------------*/
Fixed::~Fixed (){
    std::cout << "Destructor called" << std::endl;
}


/*----------------------------------------------------------------------------*/
/*                           Non-class functions                              */
/*----------------------------------------------------------------------------*/
std::ostream&  operator << (std::ostream &stream, const Fixed &object){
    stream << object.toFloat();
    return stream;
}