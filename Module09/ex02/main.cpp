#include "PmergeMe.hpp"
#include "DPmergeMe.hpp"

int main(int ac, char **av){
    if (ac < 2){
        std::cout << "Usage: " << av[0] << " <Unsorted numbers>" << std::endl;
        return 0;
    }
    try{
        
        PmergeMe pmer;
        pmer.parseInput(av);
        pmer.fillAndSort();

        DPmergeMe dpmer;
        dpmer.parseInput(av);
        dpmer.fillAndSort();
    } catch(std::exception const &e){
        std::cerr << "Exception: " << e.what() << '\n';
        return 1;
    }

    return 0;
}

