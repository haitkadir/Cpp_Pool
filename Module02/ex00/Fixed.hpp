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
    ~Fixed ();
    // My own functoins
    void setRawBits( int const raw );
    int getRawBits( void ) const;
    // Destructor
    Fixed & operator = (const Fixed &a);
};

#endif

