#include <iostream>
using namespace std;

int main()
{
  int number = 0;
  int request;
  cout << "Number Requester!\n";
  cout << "Enter Your Number: ";
  cin >> request;
    do{
        cout<< number <<"";
        number++;
    }
    while (number>=request);
    return 0;
}