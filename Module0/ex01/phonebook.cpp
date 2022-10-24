/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haitkadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 19:14:20 by haitkadi          #+#    #+#             */
/*   Updated: 2022/10/18 19:14:23 by haitkadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"


/*---------------------------------------------------------------------------------------*/

void PhoneBook::setcontactsLen(int index)
{
	this->contactsLen = index;
}

/*---------------------------------------------------------------------------------------*/

void PhoneBook::Add()
{
	std::string buffer;
	std::string fields[5];
	int			i;

	fields[0] = "First Name:";
	fields[1] = "Last Name:";
	fields[2] = "Nick Name:";
	fields[3] = "Phone Number:";
	fields[4] = "Darkest Secret:";
	i = 0;
	while(i < 5)
	{
		system("clear");
		std::cout << "\033[1;32m" << fields[i] << "\033[0m ";
		buffer.clear();
		getline(std::cin, buffer);
		if (std::cin.eof())
        	exit(EXIT_SUCCESS);
		if (buffer.empty()){
			system("clear");
			std::cout << "\033[1;31mEmpty field!\033[0m" << std::endl;
			continue;
		}
		this->contacts[this->contactsLen % MAX_CONTACTS].setData(buffer, i);
		std::cin.clear();
		i++;
	}
	this->contactsLen++;
}

/*---------------------------------------------------------------------------------------*/

static	bool	isNumeric(std::string str)
{
	for (int i = 0; i < str.length(); i++){
		if (!(std::isdigit(str[i])))
			return false;
	}
    return true;
}

/*---------------------------------------------------------------------------------------*/

void  PhoneBook::Search(){
	int			maxIndex;
	std::string buffer;
	int			index;

	maxIndex = this->contactsLen;
	if (maxIndex > MAX_CONTACTS)
		maxIndex = MAX_CONTACTS;
	if (maxIndex <= 0){
		std::cout << "\033[0;33mNo contacts found" << std::endl;
		return;
	}
	for(int i = 0; i < maxIndex; i++){
		printContactInCols(std::to_string(i + 1), this->contacts[i].getFirstName(), \
				this->contacts[i].getLastName(), this->contacts[i].getNickName());
	}
	while(true){
		index = -1;
		std::cout << "\033[1;35mEnter contact index:\033[0m ";
		getline(std::cin, buffer);
		std::stringstream	temp(buffer);
		temp >> index;
		if (buffer.empty()){
			break;
		}else if (std::cin.eof())
        	exit(EXIT_SUCCESS);
		if (!isNumeric(buffer))
			std::cout << "\033[0;33mOnly digits accepted!" << "\033[0m" << std::endl;
		else if (index > 0 && index <= this->contactsLen){
			printContactInRows(std::to_string(index), this->contacts[index - 1].getFirstName(), \
				this->contacts[index - 1].getLastName(), this->contacts[index - 1].getNickName(), \
				this->contacts[index - 1].getPhoneNumber(), this->contacts[index - 1].getDarkestSecret());
			break;
		}else
			std::cout << "\033[0;33mCan't find a Contact with index: " << index << "\033[0m" << std::endl;
		std::cin.clear();
	}
}

/*---------------------------------------------------------------------------------------*/
