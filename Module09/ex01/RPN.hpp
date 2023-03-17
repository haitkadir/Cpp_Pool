#ifndef __RPN_H__
#define __RPN_H__
#include <iostream>
#include <sstream>
#include <stack>
#include <exception>

class RPN{
private:
    std::stack<double> _rpn;
    void    stringTrim(std::string &str, const char *to_trim);
    void    clac(char c);
    bool    check_calc(std::string &str);
public:
    RPN ();
    RPN (const RPN &a);
    RPN & operator = (const RPN &a);
    ~RPN ();
    void parse_execute(std::string str);


};

#endif

