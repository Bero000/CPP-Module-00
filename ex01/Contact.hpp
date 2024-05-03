#ifndef CONTACT_HPP
#define CONTACT_HPP

# include <iostream>
# include <string>
# include <iomanip>

class Contact
{
    private:
        std::string firstName;
        std::string lastName;
        std::string nickName;
        std::string darkestSecret;
        std::string phoneNumb;
    public:
        std::string get_firstName();
        std::string get_lastName();
        std::string get_nickName();
        std::string get_darkestSecret();
        std::string get_phoneNumb();
        void set_firstName(std::string name);
        void set_lastName(std::string l_name);
        void set_nickName(std::string n_name);
        void set_darkestSecret(std::string secret);
        void set_phoneNumb(std::string numb);
        std::string to_long(std::string);
};

#endif