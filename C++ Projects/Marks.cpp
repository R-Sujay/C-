#include <iostream>
#include <conio.h>
using namespace std;

int main()
{ 
    int marks;
    cout << "Enter your Marks: ";
    cin >> marks;
    if (marks >=50) {
    cout << "You have passed";
    }
    else { 
    cout <<"You have failed";
    }
    cout << "\n\n\nPress any key to close this";
    getch();
    return 0;
}