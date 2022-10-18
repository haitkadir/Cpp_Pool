#include "contact.hpp"
#include "phonebook.hpp"
#include <string>


using namespace std;
int main(){
  PhoneBook phonebook;
  std::string   buffer;

  phonebook.setcontactsLen(0);
  for(; true;){
      std::cout << "\033[1;34mEnter Command:\033[0m ";
      buffer.clear();
      getline(std::cin, buffer);
      if (std::cin.eof())
         exit(EXIT_SUCCESS);
      std::cin.clear();
      if (buffer.compare("ADD") == 0){
         phonebook.Add();
      }else if(buffer.compare("SEARCH") == 0){
         phonebook.Search();
      }else if(buffer.compare("EXIT") == 0)
         exit(EXIT_SUCCESS);
      else if(buffer.compare("-h") == 0)
        std::cout << "\033[0;32m Avilable Commands are: ADD, SEARCH and EXIT\033[0m" << std::endl;
      else if (!buffer.empty()){
         std::cout << "\033[0;33mUknown Command use \"-h\" for help\033[0m" << std::endl;
      }
  }
  exit(EXIT_SUCCESS);
}
