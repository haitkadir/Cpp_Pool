#ifndef __EASYFIND_H__
#define __EASYFIND_H__
#include <iostream>
#include<bits/stdc++.h>
#include <algorithm>
#include <deque>


template <typename T>
int easyfind(T container, int to_find){
    typename T::iterator it;
    it = std::find(container.begin(), container.end(), to_find);
    if (it != container.end()){
        return (*it);
    }
    throw std::runtime_error("Not found");
}



#endif

