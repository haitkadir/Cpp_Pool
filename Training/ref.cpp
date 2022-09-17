#include <iostream>

/*
void Log(int *var){
  (*var)--;
}

using namespace std;
int main(){
  int var = 5;

  Log(&var);
  cout << var;
}
*/

// Using references instead of pointer

void Log(int& var){
  var--;
}

using namespace std;
int main(){
  int var = 5;

  Log(var);
  cout << var;
}
