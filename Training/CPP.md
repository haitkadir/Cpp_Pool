# CPP PooL

### After spending about 8 month in learnign and building projects using `C`,
### now it's time to switch a little bit so the nearest one is `C++`.


- Today I leant simple `C++` syntax and created my first `C++` program,
- that usual one you know, `Hello world` program

```c++

#include <iostream>

int main(){
    std::cout << "Hello world!";
}

```
- Now let's discuss the above program and explain all this new things
- `#include <iostream>` This how we included this header file that has `std`.
- `int main()` It called main function which is the entre point of the program,
- means all your functions should be called inside this function.
- `std` is a class that provides all the standrd methods input, output err, etc.
- `cout` Is a standerd output.
- `<<` Think of these left arows as a function like that `cout.print("hello world")`.

#### That's all

**Now let's talk about Variables in `c++`**

- A variable is is something used to store data in memory,
- we can edite that data, calcul it, and change it.
- In example below we decleard most famose variables in `C++`,
- and we printed their size using `sizeof` function.

```c++
#include <iostream>

using namespace std;

int main(){
    char c = 'A';
    int age = 24;
    float f = 15.5f;
    double d = 344443434443.98494398484;
    long double ld = 89438949849843984.3498498498439843984398;


  cout << "size of char => "; cout << sizeof(char); cout << " Bytes"; cout << endl;

  cout << "size of int => "; cout << sizeof(int);  cout << " Bytes"; cout << endl;

  cout << "size of float => "; cout << sizeof(float);  cout << " Bytes"; cout << endl;

  cout << "size of double => "; cout << sizeof(double);  cout << " Bytes"; cout << endl;

  cout << "size of long double => "; cout << sizeof(long double);  cout << " Bytes"; cout << endl;

}
```

```Shell
Output:

size of char => 1 Bytes
size of int => 4 Bytes
size of float => 4 Bytes
size of double => 8 Bytes
size of long double => 16 Bytes
```
- If we want to print their values we can just replace `sizeof(type)` with variable name.

```c++
#include <iostream>

using namespace std;

int main(){
    char c = 'A';
    int age = 24;
    float f = 15.5f;
    double d = 344443434443.98494398484;
    long double ld = 89438949849843984.3498498498439843984398;


  cout << "value of char => "; cout << c; cout << endl;

  cout << "value of int => "; cout << age; cout << endl;

  cout << "value of float => "; cout << f; cout << endl;

  cout << "value of double => "; cout << d; cout << endl;

  cout << "value of long double => "; cout << ld; cout << endl;

}
```

```Shell
Output:

value of char => A
value of int => 24
value of float => 15.5
value of double => 3.44443e+11
value of long double => 8.94389e+16
```
**Now let's move on to `functions`**

- `functions` Are jus a block of instructions.
- Once you find yourself reptaing the same code here where `functions`
    come from, It used to to call same instructions each time with
    diffrent `data`.
- Functions syntax in `C++`,
- `dataType functionsName(argument1, argument2, ...){
-     //your instructions here
- }`

```c++
//Example:
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
```
```Shell
Output:
10
15
20
```












