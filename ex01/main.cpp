#include "PhoneBook.hpp"

std::string get_process(std::string value)
{
    std::getline(std::cin, value);
    if(std::cin.eof())
        exit (1);
    return value;
}

int main()
{
    PhoneBook dude;
    std::string first_process;
    int num;
    while (first_process != "EXIT")
    {
        std::cout << "Enter Wanted Command"<< std::endl;
        first_process = get_process(first_process);
        if (first_process == "ADD" || first_process == "SEARCH" || first_process == "EXIT")
        {
            if (first_process == "ADD")
                num = dude.add();
            else if (first_process == "SEARCH")
                dude.search(num);
            else if (first_process == "EXIT")
                continue;
        }
    }
    if (first_process == "EXIT")
        std::cout<< "You have been successfuly exited."<< std::endl;
}