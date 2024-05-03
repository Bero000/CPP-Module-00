#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook
{
    private:
        Contact people[8];
    public:
        int add();
        void search(int num);
};

#endif