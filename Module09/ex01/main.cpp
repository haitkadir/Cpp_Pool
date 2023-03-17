#include "RPN.hpp"

int main(int ac, char **av){
    if (ac != 2){
        std::cout << "Usage: " << av[0] << " <\"Reverse Polish Notation\">" << std::endl;
        return 0;
    }
    try{
        RPN rpn;
        rpn.parse_execute(av[1]);

    } catch(std::exception const &e){
        std::cerr << "Exception: " << e.what() << '\n';
        return 1;
    }
    return 0;
}

