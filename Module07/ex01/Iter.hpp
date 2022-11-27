#ifndef __ITER_H__
#define __ITER_H__
#include <iostream>

template <typename T>
void Iter(T arr[], T len, void (*f)(T const &)){
    for (int i = 0; i < len; i++){
        f(arr[i]);
    }
}


template <typename T>
void    sum(T const &a)
{
    std::cout << a << std::endl;
}

#endif

