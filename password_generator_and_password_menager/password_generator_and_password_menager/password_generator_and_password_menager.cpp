#include <iostream>
#include<cstdlib>
#include<ctime>


int main()
{
    const char alphanum[] = "0123456789!@#$%^&*abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int string_length = sizeof(alphanum) - 1;
    int n, pass_gen;
    while (1)
    {
        std::cout << "What do you want to do?:" << std::endl;
        std::cout << "1 - generate password" << std::endl;
        std::cout << "2 - end" << std::endl;
        std::cin >> pass_gen;
        if (pass_gen == 1)
        {
            std::cout << "Enter the length of password:";
            std::cin >> n;
            srand(time(0));
            for (int i = 0; i < n; i++)
                std::cout << alphanum[rand() % string_length];
            std::cout << std::endl;
        }
        else if (pass_gen == 2)
        {
            exit(0);
        }

    }
    return 0;
}


