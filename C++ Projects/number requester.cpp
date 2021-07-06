#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
  int number = 0;
  int request;
  cout << "Number Requester!";
  cout << "Enter Your Number: ";
  cin >> request;
  while (number < request) {
    cout << number << "\n";
    number++;
  }
        cout << "\n\n\nPress any key to close";
    getch();
    return 0 ;
}