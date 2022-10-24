#include <iostream>
#include <vector>



int main(){
    std::vector<int>    Numbers;
    for(int i = 0; i < 10; i++){
        Numbers.push_back(i);
    }
    // Using iterators
    for(std::vector<int>::iterator it = Numbers.begin(); it != Numbers.end(); it++){
        std::cout << *it << std::endl;
    }
    // using range based for loop [Supported only in C++ 11 and above]
    for(int Number : Numbers){
        std::cout << Number << std::endl;
    }

    
    return 0;
}