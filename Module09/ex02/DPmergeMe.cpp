#include "DPmergeMe.hpp"

/*----------------------------- Canonica Form ---------------------------------*/
DPmergeMe::DPmergeMe () {}

DPmergeMe::DPmergeMe (const DPmergeMe &a){
    *this = a;
}

DPmergeMe & DPmergeMe::operator = (const DPmergeMe &a){
    if (this != &a)
        *this = a;
    return *this;
}

DPmergeMe::~DPmergeMe () {}
/*--------------------------------- end --------------------------------------*/


/*-------------------------------- Parsing ----------------------------------*/

void    DPmergeMe::stringTrim(std::string &str, const char *to_trim){
    str.erase(0, str.find_first_not_of(to_trim));                                                                                               
    str.erase(str.find_last_not_of(to_trim)+1);
}

bool    DPmergeMe::is_digits(std::string &str){
    std::string::iterator it = str.begin();
    while(it != str.end() && std::isspace(*it)) it++;
    if ((*it == '-' || *it == '+') && !std::isdigit(*(it + 1))) return false;
    if (*it == '-' || *it == '+') it++;
    while(it != str.end()){
        if (std::isdigit(*it) == false) return false;
        it++;
    }
    return true;
}

void    DPmergeMe::print_exit(std::string err){
        std::cout << err << std::endl;
        exit(0);
}

void    DPmergeMe::parseInput(char **av){
    int j;
    int i = 1;
    std::string str;
    std::string token;

    while (av[i]){
        j = 0;
        while (av[i][j])
            token.push_back(av[i][j++]);
        if (token.find_first_not_of(" \t\n\v\f\r") == std::string::npos)
            print_exit("Error: empty argument.");
        stringTrim(token, " \t\n\v\f\r");
        if (!is_digits(token))
            print_exit("Error: Non integer found: " + token);
        str += token;
        str.push_back(' ');
        token.clear(); 
        i++;
    }
    this->_unsorted << str;
}


bool DPmergeMe::is_duplicate( const std::deque<int>& nums ) {
    for( std::deque<int>::const_iterator i = nums.begin(); i != nums.end(); ++i )
        for( std::deque<int>::const_iterator j = i+1; j != nums.end(); ++j)
            if( *i == *j ) return true;
    return false;
}
/*------------------------------ Sorting deque ------------------------------*/

void    DPmergeMe::insertionSort(std::deque<int> &array){
    std::deque<int>::iterator  i = array.begin() + 1;
    std::deque<int>::iterator  j;
    for(; i != array.end(); ++i){
        j = i;
        while( j > array.begin() && *(j - 1) > *j){
            std::iter_swap(j, j - 1);
            --j;
        }
    }
}


void    DPmergeMe::merge(std::deque<int> &both, std::deque<int> &left, std::deque<int> &right){
    std::deque<int>::iterator left_it = left.begin();
    std::deque<int>::iterator right_it = right.begin();
    both.clear();
    while(left_it != left.end() && right_it != right.end()){
        if(*left_it > *right_it){
            both.push_back(*right_it);
            right_it = right.erase(right_it);
        }else{
            both.push_back(*left_it);
            left_it = left.erase(left_it);
        }
    }
    while(left_it != left.end()){
        both.push_back(*left_it);
        left_it = left.erase(left_it);
    }
    while(right_it != right.end()){
        both.push_back(*right_it);
        right_it = right.erase(right_it);
    }
}


std::deque<int>    DPmergeMe::mergesort(std::deque<int> array, std::size_t threshold) {
    if (array.size() > threshold){
        if (array.size() == 1)
            return array;
        int middle = array.size() / 2;
        std::deque<int> left(array.begin(), array.begin() + middle);
        std::deque<int> right(array.begin() + middle, array.end());
        if (middle > 1){
            left = mergesort(left, threshold);
            right = mergesort(right, threshold);
        }
        merge(array, left, right);
    }else
        this->insertionSort(array);
    return array;
}

void    DPmergeMe::fillAndSort(){
    std::deque<int>    unsorted;
    std::string token;
    long    int_token;
    while (std::getline(this->_unsorted, token, ' ')){
        int_token = std::atol(token.c_str());
        if (int_token < 0 || int_token > INT_MAX)
            print_exit("Error: Out of range: " + token);
        unsorted.push_back(int_token);
        token.clear();
    }
    if(is_duplicate(unsorted))
        print_exit("Error: duplicate number found.");
    std::cout << "Before: ";
    std::deque<int>::iterator it = unsorted.begin();
    while (it != unsorted.end()){
        std::cout << " " << *it;
        it++;
    }
    std::cout << std::endl;
    std::deque<int>    sorted = mergesort(unsorted, 1);
    std::cout << "After:  ";
    std::deque<int>::iterator it1 = sorted.begin();
    while (it1!= sorted.end()){
        std::cout << " " << *it1;
        it1++;
    }
    std::cout << std::endl;
}


/*--------------------------------- end --------------------------------------*/


