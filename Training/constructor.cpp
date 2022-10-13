#include <iostream>
#include <string>

class Constractur{

  public:
    char *string;

    Constractur(){
      string = new char[10];
    }

    void FillStr(const char *str){
      strcpy(string, str);
    }
    void Print(){
      std::cout << string << std::endl;
    }
    ~Constractur(){
      delete string;
    }
};


int main(){
  Constractur constract;

  constract.Print();
  constract.FillStr("hello world");
  constract.Print();
}
