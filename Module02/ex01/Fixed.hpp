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
    // My own functoins
    void setRawBits( int const raw );
    int getRawBits( void ) const;
    float toFloat( void ) const;
    int toInt( void ) const;
    // Destructor
    Fixed & operator = (const Fixed &a);
    ~Fixed ();
};

std::ostream &  operator << (std::ostream &stream, const Fixed &object);

#endif
