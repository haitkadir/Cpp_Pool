#include "Fixed.hpp"

int main( void ) {
// Fixed const a(10);
// Fixed const b(20);
Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

    std::cout << b << std::endl;

return 0;
}