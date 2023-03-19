#ifndef __PMERGEME_H__
#define __PMERGEME_H__
#include <iostream>
#include <sstream>
#include <vector>

class PmergeMe{
private:
    std::stringstream   _unsorted;
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
    void    fillAndSort();
};

#endif

