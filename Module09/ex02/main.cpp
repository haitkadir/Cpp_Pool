#include "PmergeMe.hpp"
#include "DPmergeMe.hpp"
#include <ctime>

int main(int ac, char **av){
    if (ac < 2){
        std::cout << "Usage: " << av[0] << " <Unsorted numbers>" << std::endl;
        return 0;
    }
    
    try{
        PmergeMe vector;
        std::clock_t vector_startTime, vector_endTime;
        vector_startTime = std::clock();
        vector.parseInput(av);
        vector.fillAndSort();
        vector_endTime = std::clock();
        vector.print_unsorted();
        double vector_time_taken = double(vector_endTime - vector_startTime) / CLOCKS_PER_SEC * 1000;

        DPmergeMe deque;
        std::clock_t deque_startTime, deque_endTime;
        deque_startTime = std::clock();
        deque.parseInput(av);
        deque.fillAndSort();
        deque_endTime = std::clock();
        deque.print_sorted();
        double deque_time_taken = double(deque_endTime - deque_startTime) / CLOCKS_PER_SEC * 1000000;

        std::cout << "Time to process a range of " << ac -1 << " elements with std::vector: " << vector_time_taken << " us" << std::endl;
        std::cout << "Time to process a range of " << ac -1 << " elements with std::deque: " << deque_time_taken << " us" << std::endl;
    } catch(std::exception const &e){
        std::cerr << "Exception: " << e.what() << '\n';
        return 1;
    }

    return 0;
}
 
