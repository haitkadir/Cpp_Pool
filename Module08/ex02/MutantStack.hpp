#ifndef __MUTANTSTACK_H__
#define __MUTANTSTACK_H__
#include <iostream>
#include <deque>
#include <stack>

template<class T, class Container = std::deque<T> > 
class MutantStack: public std::stack<T, Container>{
public:
    MutantStack (): std::stack<T, Container>() { return; }
    MutantStack (const MutantStack &a): std::stack<T, Container>(a) { return; }
    MutantStack & operator = (const MutantStack &a){
        if (this != &a) {
            std::cout << "MutantStack: Copy assignment operator called!" << std::endl;
            std::stack<T, Container>::operator=(a);
        }
        return (*this);
    }
    ~MutantStack () { return; }

    typedef typename std::stack<T, Container>::container_type::iterator            iterator;
    typedef typename std::stack<T, Container>::container_type::reverse_iterator    reverse_iterator; 


    iterator begin(){ return this->c.begin(); }
    iterator end(){ return this->c.end(); }

    reverse_iterator rbegin(){ return this->c.rbegin(); }
    reverse_iterator rend(){ return this->c.rend(); }
};

#endif

