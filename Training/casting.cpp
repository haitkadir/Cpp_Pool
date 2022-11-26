#include <iostream>

void print(int x){
  std::cout << x << std::endl;
}

int main(){
  double x = 5.433;

  print(dynamic_cast<int>(x));

  return(0);
}
