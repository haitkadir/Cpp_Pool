#include "Fixed.hpp"

/*--------------------------------------------------------*/
Fixed::Fixed (){
    this->RawBits = 0;
    std::cout << "Default constructor called" << std::endl;
}

/*--------------------------------------------------------*/
Fixed::Fixed (const Fixed &a){
    this->RawBits = a.RawBits;
    std::cout << "Copy constructor called" << std::endl;
}

/*--------------------------------------------------------*/
Fixed & Fixed::operator = (const Fixed &a){
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &a)
        this->RawBits = a.getRawBits();
    return *this;
}

void Fixed::setRawBits( int const raw ){
    this->RawBits = raw;
    std::cout << "setRawBits member function called" << std::endl;
}
int Fixed::getRawBits( void ) const{
    std::cout << "getRawBits member function called" << std::endl;
    return this->RawBits;
}


/*--------------------------------------------------------*/
Fixed::~Fixed (){
    std::cout << "Destructor called" << std::endl;
}
