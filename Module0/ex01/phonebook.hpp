#ifndef PHONEBOOK_H
# define PHONEBOOK_H

class Contact{
    char    *firstName;
    char    *lastName;
    char    *nickName;
    long    phoneNumber;
    char    *darkestSecret;
};

class PhoneBook{
    Contact contacts;
    int     fillFields;

    public:
        void Add(){
            fillFields = 4;
        };
        void Search();
        void Exit();
};


#endif