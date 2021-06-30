#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
  int day;
  cout << "Enter the number for a day (under 7): ";
  cin >> day;
  switch (day) {
  case 1:
    cout << "Monday";
    break;
  case 2:
    cout << "Tuesday";
    break;
  case 3:
    cout << "Wednesday";
    break;
  case 4:
    cout << "Thursday";
    break;
  case 5:
    cout << "Friday";
    break;
  case 6:
    cout << "Saturday";
  break;
  case 7:
    cout << "Sunday";
    break;
      default: 
      cout << "Invalid Input! Please enter number between 1-7";
  break;
  }
    cout << "\n\n\nPress any key to close this";
    getch();
    return 0;
}