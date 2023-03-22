#ifndef __PMERGEME_H__
#define __PMERGEME_H__
#include <iostream>
#include <sstream>
#include <vector>

class PmergeMe{
private:
    std::stringstream   _sunsorted;
    std::vector<int> _unsorted;
    std::vector<int>   _sorted;
    void    stringTrim(std::string &str, const char *to_trim);
    bool    is_digits(std::string &str);
    void    print_exit(std::string err);
    bool is_duplicate( const std::vector<int>& nums );
public:
    PmergeMe ();
    PmergeMe (const PmergeMe &a);
    PmergeMe & operator = (const PmergeMe &a);
    ~PmergeMe ();
    /*---------------------------------------------------------*/
    void    parseInput(char **av);
    /*-------------------Sorting vector------------------------*/
    void    fillAndSort();
    void    insertionSort(std::vector<int> &array);  
    void    merge(std::vector<int> &both, std::vector<int> &left, std::vector<int> &right);
    std::vector<int>     mergesort(std::vector<int> array, std::size_t threshold);
    void    print_unsorted();
    void    print_sorted();
};

#endif

