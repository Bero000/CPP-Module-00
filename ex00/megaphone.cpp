


#include <iostream>
int main(int ac, char **av)
{
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else if (ac > 1)
    {
       for (short int c = 1; c < ac; c++)
       {
            for (int i = 0; av[c][i]; i++)
            {
                if (isalpha(av[c][i]))
                    std::cout<< static_cast<char>(toupper(av[c][i]));
                else
                    std::cout<< av[c][i];
            }
       }
    }
    std::cout<< std::endl;
}