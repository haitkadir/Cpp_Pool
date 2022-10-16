#ifndef PHONEBOOK_H
#define PHONEBOOK_H
#include <iostream>
#include <string>
#include "contact.hpp"

class PhoneBook{
  Contact contacts[8];
  int     conLength;

public:
  void  setConLength(int value);
  int   getConLength();
  void  Add();
  void  Search();

};

#endif
