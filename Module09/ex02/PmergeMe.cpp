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
    if ((*it == '-' || *it == '+') && it + 2 == str.end()) it++;
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
    this->_unsorted << str;
}


bool PmergeMe::is_duplicate( const std::vector<int>& nums ) {

    for( std::size_t i = 0 ; i < nums.size() ; ++i )
        for( std::size_t j = i+1 ; j < nums.size() ; ++j )
            if( nums[i] == nums[j] ) return true;
    return false;
}

void    PmergeMe::fillAndSort(){
    std::vector<int>    vect_unsorted;
    std::string token;
    long    int_token;
    while (std::getline(this->_unsorted, token, ' ')){
        int_token = std::atol(token.c_str());
        if (int_token < INT_MIN || int_token > INT_MAX)
            print_exit("Error: Out of range: " + token);
        vect_unsorted.push_back(int_token);
        token.clear();
    }
    if(is_duplicate(vect_unsorted))
        print_exit("Error: duplicate number found.");
    std::cout << "Before: ";
    std::vector<int>::iterator it = vect_unsorted.begin();
    while (it != vect_unsorted.end()){
        std::cout << " " << *it;
        it++;
    }
    std::cout << std::endl;
}