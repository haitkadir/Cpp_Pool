#include <iostream>

int getSum(int a, int b){
  return(a + b);
}

int main(){
  using namespace std;

  cout << getSum(5, 5); cout << endl;
  cout << getSum(5, 10); cout << endl;
  cout << getSum(5, 15); cout << endl;

}
