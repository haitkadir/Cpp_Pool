#include <iostream>
#include <memory>
#include <string>
#include <algorithm>
 
struct A
{
    int n;
    std::string s1;
 
    A() = default;
    A(A const&) = default;
 
    // user-defined copy assignment (copy-and-swap idiom)
    A& operator+(A other)
    {
        std::cout << "copy assignment of A\n";
        std::swap(n, other.n);
        std::swap(s1, other.s1);
        return *this;
    }
};
 
 
int main()
{
    A a1, a2;
    std::cout << "a1 = a2 calls ";
    a1 + a2; // user-defined copy assignment

}