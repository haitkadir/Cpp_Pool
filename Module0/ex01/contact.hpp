#ifndef CONTACT_H
#define CONTACT_H
#include <iostream>
#include <string>


class Contact{
  std::string   firstName;
  std::string   lastName;
  std::string   nickName;
  std::string   phoneNumber;
  std::string   darkestSecret;
public:
  void          setData(std::string value, int id);
  std::string   getFirstName();
  std::string   getLastName();
  std::string   getNickName();
  std::string   getPhoneNumber();
  std::string   getDarkestSecret();
};


#endif

