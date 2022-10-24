#include <iostream>
#include <vector>





// class Test{
// public:
//     static void setNum(int val){
//         _num = val;
//     }
//     static void getNum(){
//         std::cout << _num << std::endl;
//     }
// private:
//     static int _num;
// };

// int Test::_num = 0;

int main(){
    int	const				amounts[]	= { 42, 54, 957, 432, 1234, 0, 754, 16576 };
	size_t const			amounts_size( sizeof(amounts) / sizeof(int) );

    std::vector<int> tests(amounts, amounts + amounts_size);
    for (auto test : tests){
        std::cout << test << std::endl;
    }

    return 0;
}