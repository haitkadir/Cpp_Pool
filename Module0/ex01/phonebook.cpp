#include "phonebook.hpp"

void PhoneBook::setcontactsLen(int index)
{
	this->contactsLen = index;
}

void PhoneBook::Add()
{
	std::string buffer;
	std::string fields[5];
	int			i;

	fields[0] = "First Name: ";
	fields[1] = "Last Name: ";
	fields[2] = "Nick Name: ";
	fields[3] = "Phone Number: ";
	fields[4] = "Darkest Secret: ";
	if (this->contactsLen == 8)
		this->contactsLen--;
	i = 0;
	while (i < 5)
	{
		system("clear");
		std::cout << "\033[1;32m" << fields[i] << "\033[0m" << std::endl;
		getline(std::cin, buffer);
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
void  PhoneBook::Search(){
	int maxIndex;
	int	index;

	index = -1;
	maxIndex = this->contactsLen;
	for(; ;){
		// system("clear");
		std::cout << "\033[1;35mEnter contact index: \033[0m" << std::endl;
		if (!(std::cin >> index)){
			system("clear");
			std::cout << "\033[1;31mEmpty field!\033[0m" << std::endl;
			continue;
		}
		if (index > 0 && index <= this->contactsLen){
			std::cout << this->contacts[index - 1].getFirstName() << std::endl;
		}
	}
}
