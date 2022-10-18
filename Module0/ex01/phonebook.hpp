#ifndef PHONEBOOK_H
#define PHONEBOOK_H
#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
#include "contact.hpp"

#define MAX_CONTACTS 8


/*------------------------------------PhoneBook Object-----------------------------------*/
class PhoneBook{
  Contact contacts[MAX_CONTACTS];
  int     contactsLen;

public:
  void  setcontactsLen(int index);
  void  Add();
  void  Search();

};

/*--------------------------------------Output Data--------------------------------------*/
std::string truncStr(std::string str);

void        printContactInCols(std::string index, std::string firstName, \
  std::string lastName, std::string nickName);

void        printContactInRows(std::string index, std::string firstName, std::string lastName, \
	std::string nickName, std::string phoneNumber, std::string darkestSecret);

#endif
