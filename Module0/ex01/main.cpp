#include <iostream>
#include <string>
#include "contact.hpp"
#include "phonebook.hpp"

void  Add_command(PhoneBook& phonebook){
  conLength = getConLength();
}

using namespace std;
int main(){
  std::string   buffer;

  buffer = "";
  for(; ;){
    std::cout << "Enter Command" << std::endl;
    getline(std::cin, buffer);
    if (buffer.compare("Add") == 0){
        cout << "Add" << endl;
    }else if(buffer.compare("Search") == 0){
        cout << "Search" << endl;
    }else if(buffer.compare("Exit") == 0)
        exit(EXIT_SUCCESS);
  }
  return 0;
}

