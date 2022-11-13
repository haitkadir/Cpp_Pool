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
/*----------------------- Operators overloading ----------------------------*/
    bool operator > (const Fixed &a)const;
    bool operator < (const Fixed &a)const;
    bool operator >= (const Fixed &a)const;
    bool operator <= (const Fixed &a)const;
    bool operator == (const Fixed &a)const;
    bool operator != (const Fixed &a)const;
    // Arithmatic operators

    Fixed & operator + (const Fixed &a);
    Fixed & operator * (const Fixed &a);
    Fixed & operator / (const Fixed &a);
    // Copy assignment operator
    Fixed & operator = (const Fixed &a);

/*-------------------------------- Destructor ------------------------------*/
    ~Fixed ();
};

std::ostream &  operator << (std::ostream &stream, const Fixed &object);

#endif
