#include "contact.hpp"


void    Contact::setFirstName(std::string value){
  firstName = value;
}
std::string  Contact::getFirstName(){
  return firstName;
}
void    Contact::setLastName(std::string value){
  lastName = value;
}
std::string  Contact::getLastName(){
  return lastName;
}
void    Contact::setNickName(std::string value){
  nickName = value;
}
std::string  Contact::getNickName(){
  return nickName;
}
void    Contact::setPhoneNumber(long value){
  phoneNumber = value;
}
long    Contact::getPhoneNumber(){
  return phoneNumber;
}
void    Contact::setDarkestSecret(std::string value){
  darkestSecret = value;
}
std::string  Contact::getDarkestSecret(){
  return darkestSecret;
}
