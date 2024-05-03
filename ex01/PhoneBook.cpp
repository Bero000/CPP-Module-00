
#include "PhoneBook.hpp"

int PhoneBook::add()
{
    static int indx = 0;
    static int tmp = 0;
    std::string str;
    if (indx == 8)
        indx = 0;

    do
    {
        std::cout << "Enter FirstName = ";
        getline(std::cin, str);
        if(std::cin.eof())
            exit (1);
        people[indx].set_firstName(str);
        if (str.empty())
            std::cout<< "First Name can't be NULL. Please enter argument." <<std::endl;
    }while(str.empty());

    do
    {
        std::cout << "Enter LastName = ";
        getline(std::cin, str);
        if(std::cin.eof())
            exit (1);
        people[indx].set_lastName(str);
        if (str.empty())
            std::cout<< "Last Name can't be NULL. Please enter argument." <<std::endl;
    }while(str.empty());

    do
    {
        std::cout << "Enter NickName = ";
        getline(std::cin, str);
        if(std::cin.eof())
            exit (1);
        people[indx].set_nickName(str);
        if (str.empty())
            std::cout<< "Nick Name can't be NULL. Please enter argument." <<std::endl;
    }while(str.empty());

    do
    {
        std::cout << "Enter Darkest Secret = ";
        getline(std::cin, str);
        if(std::cin.eof())
            exit (1);
        people[indx].set_darkestSecret(str);
        if (str.empty())
            std::cout<< "Darkest Secret can't be NULL. Please enter argument." <<std::endl;
    }while(str.empty());

    do
    {
        std::cout << "Enter PhoneNumber = ";
        getline(std::cin, str);
        if(std::cin.eof())
            exit (1);
        people[indx].set_phoneNumb(str);
        if (str.empty())
            std::cout<< "Phone Number can't be NULL. Please enter argument." <<std::endl;
    }while(str.empty());

    indx++;
    tmp++;
    if (tmp > 8)
        tmp = 8;
    return (tmp);
}

void PhoneBook::search(int num)
{
    int indx = 0, x;
    int flag = 0;
	std::string tmp;
    if (people[0].get_firstName().empty())
        std::cout << "No argument." << std::endl;
    else
    {
        while (indx != num)
        {
            if (!people[indx].get_firstName().empty())
            {
                std::cout<< "*********************************************"<<std::endl;
                std::cout<< "|" << std::setw(5) << indx + 1 << std::setw(5) << "|";
                std::cout<< std::setw(10) <<people[indx].to_long(people[indx].get_firstName()) << "|";
                std::cout<< std::setw(10) <<people[indx].to_long(people[indx].get_lastName()) << "|";
                std::cout<< std::setw(10) <<people[indx].to_long(people[indx].get_nickName()) << "|"<<std::endl;
                std::cout<< "*********************************************"<<std::endl;
            }
            indx++;
        }
        std::cout<< "Enter a number (between 1-8) = ";
		std::getline(std::cin, tmp);
        if(std::cin.eof())
            return ;
		x = atoi(tmp.c_str());
        do
        {
            if (!(x >= 1 && x <= 8))
            {
                std::cout <<"U have to enter between 1-8"<< std::endl;
                continue;
            }
            else
            {
                if (x > indx)
                {
                    std::cout<< "Wrong entry!" << std::endl;
                    flag = 1;
                    continue;
                }
                else
                {
                    std::cout<< "------------"<<std::endl;
                    std::cout<< "|" << std::setw(5) << x << std::setw(5) << "|" << std::endl;
                    std::cout<< "FirstName = " << people[x - 1].get_firstName() << std::endl;
                    std::cout<< "LastName = " << people[x - 1].get_lastName() << std::endl;
                    std::cout<< "NickName = " << people[x - 1].get_nickName() << std::endl;
				    std::cout<< "DarkestSecret = " << people[x - 1].get_darkestSecret() << std::endl;
				    std::cout<< "PhoneNumber = " << people[x - 1].get_phoneNumb()<<std::endl;
				    std::cout<< "------------"<<std::endl;
                    flag = 1;
                }
                    
            }
        }
        while (x >= 1 && x <= 8 && flag != 1);
    }
}