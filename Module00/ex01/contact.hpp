/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haitkadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 19:12:53 by haitkadi          #+#    #+#             */
/*   Updated: 2022/10/18 19:12:56 by haitkadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

