#include "sed.hpp"



int main(int ac, char **av){
    if (ac == 4){
        searchAndReplace(av[1], av[2], av[3]);
    }else {
        std::cout << "\033[1;33m"
        << "Wrong arguments!. "
        << "\033[1;32m"
        << "fileName searchStr replaceStr."
        << "\033[0m" << std::endl;
    }
    return 0;
}