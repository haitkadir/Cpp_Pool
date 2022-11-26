#include "Base.hpp"

int main(void){

    Base    *ptr = NULL;;

    try
    {
        ptr = generate();
        identify(ptr);
        identify(*ptr);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    delete ptr;
    
    return 0;
}

