#include <iostream>
#include "contact.hpp"
#include "phonebook.hpp"
#include <string>


using namespace std;
int main(){
  PhoneBook phonebook;
  std::string   buffer;

  phonebook.setcontactsLen(0);
  buffer.clear();
  for(; ;){
    std::cout << "\033[1;34mEnter Command\033[0m" << std::endl;
    getline(std::cin, buffer);
    if (buffer.compare("ADD") == 0){
       phonebook.Add();
    }else if(buffer.compare("SEARCH") == 0){
       phonebook.Search();
    }else if(buffer.compare("EXIT") == 0)
        exit(EXIT_SUCCESS);
  }
  return 0;
}

