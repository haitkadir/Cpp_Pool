#ifndef __DPMERGEME_H__
#define __DPMERGEME_H__
#include <iostream>
#include <sstream>
#include <deque>

class DPmergeMe{
private:
    std::stringstream   _sunsorted;
    std::deque<int>     _unsorted;
    std::deque<int>     _sorted;
    void    stringTrim(std::string &str, const char *to_trim);
    bool    is_digits(std::string &str);
    void    print_exit(std::string err);
    bool is_duplicate( const std::deque<int>& nums );
public:
    DPmergeMe ();
    DPmergeMe (const DPmergeMe &a);
    DPmergeMe & operator = (const DPmergeMe &a);
    ~DPmergeMe ();
    /*---------------------------------------------------------*/
    void    parseInput(char **av);
    /*-------------------Sorting vector------------------------*/
    void    fillAndSort();
    void    insertionSort(std::deque<int> &array);
    void    merge(std::deque<int> &both, std::deque<int> &left, std::deque<int> &right);
    std::deque<int>    mergesort(std::deque<int> array, std::size_t threshold);
    void    print_unsorted();
    void    print_sorted();
};

#endif

