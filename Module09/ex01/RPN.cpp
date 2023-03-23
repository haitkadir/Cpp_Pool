#include "RPN.hpp"

/*------------------------------ Canonical Form -------------------------------*/
RPN::RPN () {}

RPN::RPN (const RPN &a){
    *this = a;
}

RPN & RPN::operator = (const RPN &a){
    if (this != &a){
        *this = a;
    }
    return *this;
}

RPN::~RPN () {}
/*---------------------------------- End -------------------------------------*/


/*--------------------------- Parse and execute ------------------------------*/

void    RPN::stringTrim(std::string &str, const char *to_trim){
    str.erase(0, str.find_first_not_of(to_trim));                                                                                               
    str.erase(str.find_last_not_of(to_trim)+1);
}

void    RPN::clac(char c){
    double  num1 = this->_rpn.top();
    this->_rpn.pop();
    double  num2 = this->_rpn.top();
    this->_rpn.pop();

    if (c == '-')
        this->_rpn.push(num2 - num1);
    else if (c == '+')
        this->_rpn.push(num2 + num1);
    else if (c == '/')
        this->_rpn.push(num2 / num1);
    else if (c == '*')
        this->_rpn.push(num2 * num1);
}

bool    RPN::check_calc(std::string &str){
    std::string::iterator i = str.begin();
    while(i != str.end()){
        if (*i == ' '){
            i++;
            continue;
        }
        if (i != str.end() && (std::isdigit(*i) &&  std::isdigit(*(i + 1))))
            return false;
        else if (std::isdigit(*i))
        {
            std::string tmp(1, *i);
            this->_rpn.push(std::atoi(tmp.c_str()));
        } else if (*i == '+' || *i == '-' || *i == '/' || *i == '*'){
            if (this->_rpn.size() > 1)
                clac(*i);
            else
                return false;
        }
        else
            return false;
        i++;
    }
    return true;
}

void RPN::parse_execute(std::string str){
    if (check_calc(str) && this->_rpn.size() == 1){
        std::cout << this->_rpn.top() << std::endl;
        this->_rpn.pop();
    } else
        std::cout << "Error" << std::endl;
}


/*---------------------------------- End -------------------------------------*/