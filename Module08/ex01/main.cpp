#include "Span.hpp"

int main(void){
    Span    span(-55);
    std::vector<int>  vect;
    vect.push_back(2);
    vect.push_back(1);
    vect.push_back(9);
    vect.push_back(4);

    try
    {

        span.AddRange(vect.begin(), vect.end());
        span.print();
        std::cout << "\n longestSpan\n";
        std::cout << span.longestSpan() << std::endl;
        std::cout << "\n shortestSpan\n";
        std::cout << span.shortestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return 0;
}

