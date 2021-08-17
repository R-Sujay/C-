#include <cstring>
#include <iostream>

using namespace std;

int main()
{
    string firstName;
    cout << "Enter your First Name: ";
    cin >> firstName;    
    string lastName;
    cout << "Enter your Last Name: ";
    cin >> lastName;
    string fullName;
    fullName = firstName+lastName;
    cout << "Number of Charactars in your Full Name is " << fullName.length();

    return 0;
}