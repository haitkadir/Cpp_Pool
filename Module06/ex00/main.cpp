#include "ConverType.hpp"

int main(int ac, char **av){
    if (ac == 2){
        if (av[1]){
            ConverType convertor(av[1]);
            convertor.toChar();
            convertor.toInt();
            convertor.toFloat();
            convertor.toDouble();
        }

    } else
        std::cerr << "Bad arguments..." << std::endl;
    return 0;
}