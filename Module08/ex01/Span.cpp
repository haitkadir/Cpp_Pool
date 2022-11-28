#include "Span.hpp"

/*----------------------------------------------------------------------------*/
Span::Span () : _N(0){
    std::cout << "Span: Default constructor called!" << std::endl;
}

/*----------------------------------------------------------------------------*/
Span::Span (unsigned int N) :_N(N){
    std::cout << "Span: Initializer constructor called!" << std::endl;
}

/*----------------------------------------------------------------------------*/
Span::Span (const Span &a): _N(a._N){
    std::cout << "Span: Copy constructor called!" << std::endl;
    this->_arr = a._arr;
}

/*----------------------------------------------------------------------------*/
Span & Span::operator = (const Span &a){
    if (this != &a){
        std::cout << "Span: Copy assignment operator called!" << std::endl;
        *this = a;
    }
    return *this;
}

/*----------------------------------------------------------------------------*/
Span::~Span (){
    std::cout << "Span: Destructor called!" << std::endl;
}

/*----------------------------------------------------------------------------*/
void    Span::AddNumber(int nb){
    if (this->_arr.size() < this->_N){
        this->_arr.push_back(nb);
    } else
        throw std::runtime_error("You reach the maximum elements that you can stor in your Span");
}


/*----------------------------------------------------------------------------*/
int     Span::longestSpan(){
    if(this->_arr.size() > 1){
        return(*max_element(this->_arr.begin(), this->_arr.end()) - *min_element(this->_arr.begin(), this->_arr.end()));
    } else
        throw std::runtime_error("Less then two elements");
}

/*----------------------------------------------------------------------------*/
int     Span::shortestSpan(){
    if(this->_arr.size() > 1){
        std::vector<int> tmp = this->_arr;
        std::sort(tmp.begin(), tmp.end());
        int shortestValue;
        bool    flag = false;
        for(size_t i = 1; i < tmp.size(); i++){
            if(!flag || (tmp[i] - tmp[i -1])  < shortestValue){
                shortestValue = tmp[i] - tmp[i - 1];
                flag = true;
            }
        }
        return (shortestValue);
    } else
        throw std::runtime_error("Less then two elements");
}

/*----------------------------------------------------------------------------*/
void    Span::AddRange(std::vector<int>::iterator begin, std::vector<int>::iterator end){
    if(end > begin){
        while(begin != end && this->_arr.size() < this->_N) {
            this->_arr.push_back(*begin);
            begin++;
        }
    } else {
        throw std::runtime_error("Cannot Copy Invalid Container");
    }
}

/*----------------------------------------------------------------------------*/
void    Span::print(){
    for(std::vector<int>::iterator it = this->_arr.begin(); it != this->_arr.end(); it++)
        std::cout << *it << std::endl;
}
