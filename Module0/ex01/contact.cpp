/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haitkadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 19:12:39 by haitkadi          #+#    #+#             */
/*   Updated: 2022/10/18 19:12:41 by haitkadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

/*---------------------------------------------------------------------------------------*/

void    Contact::setData(std::string value, int id){
  switch (id)
  {
  case 0:
    this->firstName = value;
    break;
  case 1:
    this->lastName = value;
    break;
  case 2:
    this->nickName = value;
    break;
  case 3:
    this->phoneNumber = value;
    break;
  case 4:
    this->darkestSecret = value;
    break;
  default:
    break;
  }
}

/*---------------------------------------------------------------------------------------*/

std::string  Contact::getFirstName(){
  return this->firstName;
}

/*---------------------------------------------------------------------------------------*/

std::string  Contact::getLastName(){
  return this->lastName;
}

/*---------------------------------------------------------------------------------------*/

std::string  Contact::getNickName(){
  return this->nickName;
}

/*---------------------------------------------------------------------------------------*/

std::string    Contact::getPhoneNumber(){
  return this->phoneNumber;
}

/*---------------------------------------------------------------------------------------*/

std::string  Contact::getDarkestSecret(){
  return this->darkestSecret;
}

/*---------------------------------------------------------------------------------------*/
