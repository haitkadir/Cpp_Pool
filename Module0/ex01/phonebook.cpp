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
	if (this->contactsLen == 8)
		this->contactsLen--;
	i = 0;
	while (i < 5)
	{
		system("clear");
		std::cout << "\033[1;32m" << fields[i] << "\033[0m ";
		getline(std::cin, buffer);
		if (std::cin.eof())
        	exit(EXIT_SUCCESS);
		if (buffer.empty()){
			system("clear");
			std::cout << "\033[1;31mEmpty field!\033[0m" << std::endl;
			continue;
		}
		this->contacts[this->contactsLen].setData(buffer, i);
		i++;
	}
	this->contactsLen++;
}

/*---------------------------------------------------------------------------------------*/

static std::string truncStr(std::string str){
	if (str.length() > 10){
		str.resize(9);
		return str.append(".");
	}
	return str;
}

/*---------------------------------------------------------------------------------------*/

static void	printContactInCols(std::string index, std::string firstName, std::string lastName, std::string nickName){
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

static void	printContactInRows(std::string index, std::string firstName, std::string lastName, std::string nickName){
	std::cout << "\033[1;32m       Contact" << std::endl;
	std::cout << "-----------------------" << std::endl;
	std::cout << "|Index     |" << std::setw(10) << truncStr(index) << "|" << std::endl;
	std::cout << "-----------------------" << std::endl;
	std::cout << "|First Name|" << std::setw(10) << truncStr(firstName) << "|" << std::endl;
	std::cout << "-----------------------" << std::endl;
	std::cout << "|Last Name |" << std::setw(10) << truncStr(lastName) << "|" << std::endl;
	std::cout << "-----------------------" << std::endl;
	std::cout << "|Nick Name |" << std::setw(10) << truncStr(nickName) <<"|" << std::endl;
	std::cout << "-----------------------" << std::endl;
	std::cout << "\033[0m" << std::endl;
}

/*---------------------------------------------------------------------------------------*/

void  PhoneBook::Search(){
	int maxIndex;
	int	index;

	maxIndex = this->contactsLen;
	for(int i = 0; i < maxIndex; i++){
		printContactInCols(std::to_string(i + 1), this->contacts[i].getFirstName(), \
				this->contacts[i].getLastName(), this->contacts[i].getNickName());
	}
	while(true){
		index = -1;
		std::cout << "\033[1;35mEnter contact index:\033[0m ";
		if (!(std::cin >> index)){
			break;
		}else if (std::cin.eof())
        	exit(EXIT_SUCCESS);
		if (index > 0 && index <= this->contactsLen){
			printContactInRows(std::to_string(index), this->contacts[index - 1].getFirstName(), \
				this->contacts[index - 1].getLastName(), this->contacts[index - 1].getNickName());
		}else{
			std::cout << "\033[0;33mCan't find a Contact with index: " << index << "\033[0m" << std::endl;
		}
	}
}

/*---------------------------------------------------------------------------------------*/