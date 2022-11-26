#ifndef __CASTPTR_H__
#define __CASTPTR_H__
#include <iostream>
#include <cstdint>

typedef struct s_data{
    int     nb;
    char    ch;
}   Data;

class CastPtr{
public:
    uintptr_t   serialize(Data* ptr);
    Data*       deserialize(uintptr_t raw);
};

#endif

