#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
      
int main()
{
    const char alphanum[] = "0123456789!@#$%^&*abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int string_length = sizeof(alphanum) - 1;
    int n, pass_gen;
    cout << "What do you want to do?:" << endl;
    cout << "1 - generate password" << endl;
    cin >> pass_gen;
        if (pass_gen == 1)
        {
        cout << "Enter the length of password:";
        cin >> n;
        srand(time(0));
        for (int i = 0; i < n; i++)
        cout << alphanum[rand() % string_length];
        }
    return 0;
}
    

    