#ifndef __SPAN_H__
#define __SPAN_H__
#include <iostream>
#include <vector>
#include <bits/stdc++.h>

class Span{
private:
    const unsigned int _N;
    std::vector<int>    _arr;

public:
    Span ();
    Span (unsigned int N);
    Span (const Span &a);
    Span & operator = (const Span &a);
    ~Span ();
/*----------------------------------------------------------------------------*/
    void    AddNumber(int nb);
    void    AddRange(std::vector<int>::iterator begin, std::vector<int>::iterator end);
    int     longestSpan();
    int     shortestSpan();
    void    print();
};

#endif

