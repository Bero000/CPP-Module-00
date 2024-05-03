#include "PhoneBook.hpp"

void Contact::set_firstName(std::string name)
{
        this->firstName = name;
}
void Contact::set_lastName(std::string l_name)
{
    this->lastName = l_name;
}
void Contact::set_nickName(std::string n_name)
{
    this->nickName = n_name;
}
void Contact::set_darkestSecret(std::string secret)
{
    this->darkestSecret = secret;
}
void Contact::set_phoneNumb(std::string numb)
{
    this->phoneNumb = numb;
}
std::string Contact::get_firstName()
{
    return (this->firstName);
}
std::string Contact::get_lastName()
{
    return (this->lastName);
}
std::string Contact::get_nickName()
{
    return (this->nickName);
}
std::string Contact::get_darkestSecret()
{
    return (this->darkestSecret);
}
std::string Contact::get_phoneNumb()
{
    return (this->phoneNumb);
}

std::string Contact::to_long(std::string str)
{
    if (str.length() >= 10)
    {
        str.resize(9);
        str.resize(10, '.');
    }
    return str;
}