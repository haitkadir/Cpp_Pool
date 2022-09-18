# CPP PooL

### After spending about 8 months in learning and building projects using `C`,
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
-
```
- dataType functionsName(argument1, argument2, ...){
-     //your instructions here
- }
```
- `dataType` Could be any of `c++` data types `char int float double, etc`
- but if you spicifide one of this data types then you should return return a value with that data type.
- You can also spicifie `void` which means nothing you won't return a value.

```c++
//Example:
#include <iostream>

int getSum(int a, int b){
  return(a + b);
}

void log(char *message){
  using namespace std;

  cout << message; cout << endl;
}

int main(){
  using namespace std;

  cout << getSum(5, 5); cout << endl;
  cout << getSum(5, 10); cout << endl;
  cout << getSum(5, 15); cout << endl;

  log("Message one");
  log("Message tow");
}
```
```Shell
Output:
10
15
20
```

**if stetments**

- syntax
```C++
if (condition){
    //your code
} else if (condition){
    //your code
} else {
    //your code
}
```
- For example you can check if variable `x` equal `5`,
- if it's true then the first code will be excuted,
- else it will move on to next if condition,
- if it's not true it will move on to the last `else`,
- it dosn't have any condition so it's always true.
-
- That's it.

**Loop**

- Loops are just keep repeating some thing while a condition equal true.
- Syntax:

```C++

while (condition){
    //your code
}
```

```C++
//Example:

int i = 0;
while (i < 10){
    cout << i; cout << endl;
    i++;
}

//Output:
// 0
// 1
// .
// .
// 9

```

- It prints degits from 1 to 9.


**Now let's juming to `pointers`**

- `pointer` Are just variables that stors the adress of the other variables
- for example if we decleare `int x = 5` and then,
- we create a pointer `int *ptr` not to store the adress of the `x` variable,
- in this pointer w'll just asign `x` to ptr with `&` to get its adress.
- Example:
```C++
int x = 5;

int *ptr = &x;
```
- Now if we print ptr we w'll find the address of `x` variable.
```C++
cout << ptr;
// Output: 0xffe9e4....
```
- And to print the value of the `x` variable we just add `*`,
- before the ptr name.
- Example:
```C++
cout << *ptr;
```
**Reference**

- `references` Are just a ***Syntactic sugar*** of `pointers`
- Example:
```c++
//using pointers

void Increment(int *ptr){
  (*ptr)++;
}

int main(){
  int var = 5;
  Increment(&var);
  cout << var; cout << endl;// Output: 6
}
```

```c++
//using using references

void Increment(int& ref){
  ptr++;
}

int main(){
  int var = 5;
  Increment(var);
  cout << var; cout << endl;// Output: 6
}
```

- It's the same as `pointers` exept syntax.
- In `references` you don't need to pass the address you just asign the variable to the `reference`.
- Also in derefrencing `pointers` you have to add `*` to modifie the value of that var that pointing to,
- but in `references` you asign new value to the reference itself and that's all.

**Classes or OOP**

Classes are just objects that can contain all methods (e,g. functions) variables of your logic\
Example: let's say we're developing a game so that  game has a player and that player has x and y variables\
and a Method called Move to that updates player position each time we press a button.\
Without `classes` we'll create x and y varables in main function for example and then we'll create Move function\
in somewhere else that's annoying isn't it\
So with `classes` we'll just create one object and we'll declare all variables and Methods that'll move update...etc\
all between our `class` brackets `{}`\
Example:

```c++
class Player{
public:
  int x = 5;
  int y = 6;

  void Move(int xa, int ya){
    x += xa;
    y += ya;
  }
};


using namespace std;
int main(){
  Player player;

  cout << player.x << endl;
  cout << player.y << endl;
  player.Move(10, 6);
  cout << player.x << endl;
  cout << player.y << endl;
}
```

Now let's explain this block of code\
`class` is a keyword used to declare out type/class it's like when we use `int` for example to declare our integer variable\
`public` is and optinal keyword used to make this variables access able publicly/outsite of the object cuz by defult they're privite\
`void Move()` is just a function that takes input and updates x and y variables when we call it\
Just to keep in mind variables in all programming languages are case sensitive so that `Player` not equal `player`\
`Player player` we just declare our type here and we called it `player`\
To print one of our player variables `cout << player.x << endl;` or `player.y` to access y variable\
Now to move our player we alrady declared a method called `Move` and it takes x and y\
We'll just call it by typing `player.Move(10, 6)` and we'll pass how many pixels we want that player to move in x and y

Output:
```Shell
5
6
15
12
```

**`Structs`**

Structs are used to group variables\
and it's by default public means we can access structs variable outside of the struct\

```c++
struct data {
  int someDate;
  char someOtherData;
};
```
**The one tichnical diffrence between `Structs` and `Classes` is**
- `Structs` are public by default means I can access its variables outside of the `struct`
- *verses versa* `Classes` are privite by defult means only functios inside the `class` scope can access and update the variables\

**But the best practice is**
- `structs` are made to group variables
- and `Classes` made to contain variables methods and all your logic for that specific `object`\























