#ifndef PHONEBOOK_H
#define PHONEBOOK_H
#include <iostream>
#include <string>
#include <iomanip>
#include "contact.hpp"

class PhoneBook{
  Contact contacts[8];
  int     contactsLen;

public:
  void  setcontactsLen(int index);
  void  Add();
  void  Search();

};

#endif
