#include "easyfind.hpp"

int main(void){

    std::vector<int> vect;
    vect.push_back(30);
    vect.push_back(-1);
    vect.push_back(44);
    vect.push_back(100);
    try
    {
        std::cout << easyfind(vect, 50);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    
    std::cout << "\n=============================================================\n";
    std::vector<char> ch_vect;
    ch_vect.push_back('A');
    ch_vect.push_back('B');
    ch_vect.push_back('d');
    ch_vect.push_back('c');
    try
    {
        std::cout << easyfind(ch_vect, 'B');
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "\n=============================================================\n";

    std::deque<int> dque;
	dque.push_back(1);
	dque.push_back(2);
	dque.push_back(-1);
	dque.push_back(-10);

    try
    {
        std::cout << easyfind(dque, -10);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    return 0;
}

