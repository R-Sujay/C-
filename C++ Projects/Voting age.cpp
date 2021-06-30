#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int age;
    cout<<"enter your age: ";
    cin>>age;
    if (age>=18)
    {
        cout<<"voting is possible";
    }
    else
    {
        cout<<"voting is impossible";
    }
            cout << "\n\n\nPress any key to close this";
    getch();
    return 0;
}