#include "Fixed.hpp"

int main( void ) {
// Fixed const a(10);
// Fixed const b(20);
    Fixed  a(1.1119f);
    Fixed  b(1.1111f);

    std::cout << "A \t" << a << std::endl;
    std::cout << "b \t" << b << std::endl;
    std::cout << Fixed::min(a, b) << std::endl;

return 0;
}