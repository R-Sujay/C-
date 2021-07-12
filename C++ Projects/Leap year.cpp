#include <iostream>
#include <conio.h>
using namespace std;

int main() {
    int year;

    cout << "Enter a year: ";
    cin >> year;

    if (year % 4 == 0) {
                cout << year << " is a leap year.";
    }
            else{ 
                cout << year << " is not a leap year.";
            }
                cout << "\n\n\nPress any key to close";
    getch();

    return 0;
}