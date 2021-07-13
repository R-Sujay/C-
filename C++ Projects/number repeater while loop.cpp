#include <iostream>
using namespace std;

int main()
{
  int number = 0;
  int request;
  cout << "Number Requester!\n";
  cout << "Enter Your Number: ";
  cin >> request;
  while (number < request) {
    cout << number << "\n";
    number++;
  }
    return 0;
}