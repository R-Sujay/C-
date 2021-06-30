#include <iostream>
#include <conio.h>
using namespace std;

int main()
{ 
    int savings;
    cout << "Enter your amount: ";
    cin >> savings;
    if (savings <=50000){
    cout << "Amount transferred";
    }
    else { 
    cout <<"Amount cannot be transferred";
    }
    cout << "\n\n\nPress any key to close this";
    getch();
    return 0;
}