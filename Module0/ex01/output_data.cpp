/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output_data.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haitkadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 19:13:51 by haitkadi          #+#    #+#             */
/*   Updated: 2022/10/18 19:13:54 by haitkadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

/*---------------------------------------------------------------------------------------*/

std::string truncStr(std::string str){
	if (str.length() > 10){
		str.resize(9);
		return str.append(".");
	}
	return str;
}

/*---------------------------------------------------------------------------------------*/

void	printContactInCols(std::string index, std::string firstName, \
	std::string lastName, std::string nickName){
	std::cout << "\033[1;32m                   Contact" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|Index     |First Name|Last Name |Nick Name |" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|" << std::setw(10) << truncStr(index) << "|" << std::setw(10) \
		<< truncStr(firstName) << "|" << std::setw(10) << truncStr(lastName) << "|" \
		<< std::setw(10) << truncStr(nickName) <<"|" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "\033[0m" << std::endl;
}

/*---------------------------------------------------------------------------------------*/

void	printContactInRows(std::string index, std::string firstName, std::string lastName, \
	std::string nickName, std::string phoneNumber, std::string darkestSecret){
	std::cout << "\033[1;32m Contact" << std::endl;
	std::cout << "------------" << std::endl;
	std::cout << "|Index     |" << index << std::endl;
	std::cout << "------------" << std::endl;
	std::cout << "|First Name|" << firstName << std::endl;
	std::cout << "------------" << std::endl;
	std::cout << "|Last Name |" << lastName << std::endl;
	std::cout << "------------" << std::endl;
	std::cout << "|Nick Name |" << nickName << std::endl;
	std::cout << "------------" << std::endl;
	std::cout << "|Phone Num |" << phoneNumber << std::endl;
	std::cout << "------------" << std::endl;
	std::cout << "|Secret    |" << darkestSecret << std::endl;
	std::cout << "------------" << std::endl;
	std::cout << "\033[0m" << std::endl;
}
