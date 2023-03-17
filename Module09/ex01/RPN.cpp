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
    std::stringstream ss(str);
    std::string    token;
    while(std::getline(ss, token, ' ')){
        stringTrim(token, " \t\n\v\f\r");
        if (token.empty())
            continue;
        if (token.length() != 1  || token.find_first_not_of("+-/*0123456789") != std::string::npos)
            return false;
        if (std::string::npos != token.find_first_of("0123456789"))
            this->_rpn.push(stod(token));
        else if (std::string::npos != token.find_first_of("-+/*")){
            if (this->_rpn.size() > 1)
                clac(token[0]);
            else
                return false;
        }
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