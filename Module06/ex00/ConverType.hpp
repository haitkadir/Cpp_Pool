#ifndef __CONVERTYPE_H__
#define __CONVERTYPE_H__
#include <iostream>
#include <string>
#include <sstream>

class ConverType{
private:
    std::string _input;
public:
    ConverType (std::string input);
/*----------------------------------------------------------------------------*/
    void    toChar(void);
    void    toInt(void);
    void    toFloat(void);
    void    toDouble(void);
};

#endif

