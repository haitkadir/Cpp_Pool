#include <iostream>




int main(){
     
     int bits;
     int fracts = 16;
    float fp = 43.625;
    bits  = (fp * 65.536);
    // bits = (bits << fracts);

    for (int i=0; i < 32; i++){
        std::cout << " " << bits % 2;
        bits /= 2;
    }
    std::cout << std::endl;
    return 0;
}