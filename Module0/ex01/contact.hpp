#ifndef CONTACT_H
#define CONTACT_H
#include <iostream>
#include <string>


class Contact{
  std::string   firstName;
  std::string   lastName;
  std::string   nickName;
  long          phoneNumber;
  std::string   darkestSecret;
public:
  void          setFirstName(std::string value);
  std::string   getFirstName();
  void          setLastName(std::string value);
  std::string   getLastName();
  void          setNickName(std::string value);
  std::string   getNickName();
  void          setPhoneNumber(long value);
  long          getPhoneNumber();
  void          setDarkestSecret(std::string value);
  std::string   getDarkestSecret();
};




#endif

