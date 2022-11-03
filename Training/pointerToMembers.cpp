#include <iostream>
using namespace std;

class X {
public:
  void a(int b) {
    cout << "The value of A is "<< b << endl;
  }
  void b(int b) {
    cout << "The value of B is "<< b << endl;
  }
  void c(int b) {
    cout << "The value of C is "<< b << endl;
  }
};

// int main() {
//   // declare a pointer to member function
//   void (X::* pointerToMembrFunc) (int) = &X::f;

//   // create an object of class type X
//   X xobject;
//   // call member function
//   (xobject.*pointerToMembrFunc) (20);
// }

typedef int X::*my_pointer_to_member;
typedef void (X::*my_pointer_to_function) (int);

int main() {
  my_pointer_to_function pointerToMembrFunc[5] = {&X::a, &X::b, &X::c};
  X xobject;

  (xobject.*pointerToMembrFunc[2]) (20);
}