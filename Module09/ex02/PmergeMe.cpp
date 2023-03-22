#include "PmergeMe.hpp"

/*----------------------------- Canonica Form ---------------------------------*/
PmergeMe::PmergeMe () {}

PmergeMe::PmergeMe (const PmergeMe &a){
    *this = a;
}

PmergeMe & PmergeMe::operator = (const PmergeMe &a){
    if (this != &a)
        *this = a;
    return *this;
}

PmergeMe::~PmergeMe () {}
/*--------------------------------- end --------------------------------------*/


/*-------------------------------- Parsing ----------------------------------*/

void    PmergeMe::stringTrim(std::string &str, const char *to_trim){
    str.erase(0, str.find_first_not_of(to_trim));                                                                                               
    str.erase(str.find_last_not_of(to_trim)+1);
}

bool    PmergeMe::is_digits(std::string &str){
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

void    PmergeMe::print_exit(std::string err){
        std::cout << err << std::endl;
        exit(0);
}

void    PmergeMe::parseInput(char **av){
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
    this->_sunsorted << str;
}


bool PmergeMe::is_duplicate( const std::vector<int>& nums ) {
    for( std::vector<int>::const_iterator i = nums.begin(); i != nums.end(); ++i )
        for( std::vector<int>::const_iterator j = i+1; j != nums.end(); ++j)
            if( *i == *j ) return true;
    return false;
}
/*------------------------------ Sorting vector ------------------------------*/

void    PmergeMe::insertionSort(std::vector<int> &array){
    std::vector<int>::iterator  i = array.begin() + 1;
    std::vector<int>::iterator  j;
    for(; i != array.end(); ++i){
        j = i;
        while( j > array.begin() && *(j - 1) > *j){
            std::iter_swap(j, j - 1);
            --j;
        }
    }
}


void    PmergeMe::merge(std::vector<int> &both, std::vector<int> &left, std::vector<int> &right){
    std::vector<int>::iterator left_it = left.begin();
    std::vector<int>::iterator right_it = right.begin();
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

std::vector<int>    PmergeMe::mergesort(std::vector<int> array, std::size_t threshold) {
    if (array.size() > threshold){
        int middle = array.size() / 2;
        std::vector<int> left(array.begin(), array.begin() + middle);
        std::vector<int> right(array.begin() + middle, array.end());
        if (middle > 1){
            left = mergesort(left, threshold);
            right = mergesort(right, threshold);
        }
        merge(array, left, right);
    }else
        this->insertionSort(array);
    return array;
}

void    PmergeMe::fillAndSort(){
    std::vector<int>    unsorted;
    std::string token;
    long    int_token;
    while (std::getline(this->_sunsorted, token, ' ')){
        int_token = std::atol(token.c_str());
        if (int_token < 0 || int_token > INT_MAX)
            print_exit("Error: Out of range: " + token);
        unsorted.push_back(int_token);
        token.clear();
    }
    if(is_duplicate(unsorted))
        print_exit("Error: duplicate number found.");
    this->_unsorted = unsorted;
    this->_sorted = mergesort(unsorted, 20);
}


void    PmergeMe::print_unsorted(){
    std::vector<int>::const_iterator i = this->_unsorted.begin();
    std::cout << "before: ";
    while(i != this->_unsorted.end()){
        std::cout << *i << " ";
        i++;
    }
    std::cout << std::endl;
}

void    PmergeMe::print_sorted(){
    std::vector<int>::const_iterator i = this->_sorted.begin();
    std::cout << "before: ";
    while(i != this->_sorted.end()){
        std::cout << *i << " ";
        i++;
    }
    std::cout << std::endl;
}

/*--------------------------------- end --------------------------------------*/
